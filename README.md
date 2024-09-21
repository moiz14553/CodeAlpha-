# **ID Card Generator in Python (Google Colab)**

## **Overview**
This project generates a customizable **ID card** using the Python Imaging Library (PIL) in Google Colab. The ID card features the following elements:
- **Profile Picture** (User-defined)
- **Personal Details** (e.g., Name, Roll Number, Campus, etc.)
- **Logo Watermark** (e.g., PIAIC logo)
- **Green and Red Status Boxes** (for course information)
- **Authorized Signature Section**
  
This project offers a simple way to generate professional ID cards with user-defined text, images, and design elements.

## **Features**
- **Green-bordered ID card** with a customizable background.
- Support for user-uploaded **profile picture** and **logo watermark**.
- **Customizable text fields** for user information.
- **Colored status boxes** with text inside.
- **Authorized signature** field with a signature line.
- Easy to customize and extend for other use cases (e.g., badges, certificates).

## **Demo**

Here's a sample of the generated ID card:

![Sample ID Card]([/content/ID_card_generated.png](https://github.com/moiz14553/CodeAlpha-/blob/main/ID_card_generated.png?raw=true))

## **Getting Started**

### **Prerequisites**

To use this code in **Google Colab**, you'll need the following:

- **Python 3.x**
- **Pillow (PIL)**: The Python Imaging Library. You can install it via pip if necessary:
  
  ```bash
  !pip install pillow
  ```

- **Arial Font**: The Arial font file (`arial.ttf`) should be uploaded in the Colab environment.
- **Images**: Upload the necessary images like the profile picture and logo.

### **Installation**

1. **Clone the repository (Optional for GitHub)**:
   ```bash
   git clone https://github.com/your-username/id-card-generator.git
   cd id-card-generator
   ```

2. **Upload the Required Assets**:
   - Upload your **profile picture** and **logo** in the Colab environment.
   - Upload the **Arial font** file (`arial.ttf`) in the Colab environment.

3. **Install Required Libraries**:
   In Google Colab, use the following command to install the Pillow library:
   ```bash
   !pip install pillow
   ```

### **Running the Code**

1. **Upload your Profile Picture** and **Logo** in Google Colab.
2. **Update the file paths** for your images and fonts in the code as needed.
3. **Run the script** to generate your ID card.

Example:
```python
# Replace these file paths with your uploaded image paths in Colab
profile_pic = Image.open("/content/your_profile_picture.jpg").resize((100, 100)) 
piaic_logo = Image.open("/content/your_logo.png").convert("RGBA")

# Load the Arial font
font_title = ImageFont.truetype("/content/arial.ttf", 24)
# Rest of the code...
```

4. After running the script, the ID card will be saved and displayed in Colab:

```python
from IPython.display import Image
display(Image(filename='/content/ID_card_generated.png'))
```

### **Customization**
- **Text Fields**: You can modify the personal details and other text by adjusting the `draw.text()` function in the code.
- **Color and Layout**: The green border, background color, and text position can be changed by adjusting the parameters of the `ImageDraw.Draw()` object.

## **Code Example**

Here’s the core Python code for generating the ID card:

```python
from PIL import Image, ImageDraw, ImageFont

# Load and prepare assets
profile_pic = Image.open("/content/your_profile_picture.jpg").resize((100, 100))
piaic_logo = Image.open("/content/your_logo.png").convert("RGBA")

# Create the card and add elements like text, watermark, and borders
card = Image.new("RGB", (500, 300), color=(255, 255, 255))
draw = ImageDraw.Draw(card)
green = (23, 114, 69)
red = (255, 0, 0)

# Add green border, text fields, status boxes, and more
draw.rectangle([0, 0, 499, 299], outline=green, width=5)
# Add your personal details
draw.text((20, 45), "Name: Your Name", font=font_text, fill=(0, 0, 0))

# Save and display the card
card.save("/content/ID_card_generated.png")
from IPython.display import Image
display(Image(filename='/content/ID_card_generated.png'))
```

## **Customization Options**
- **Text Editing**: Change the text inside the card using the `draw.text()` function.
- **Font Style**: You can change the font or font size by replacing the font file or adjusting the size in the `ImageFont.truetype()` function.
- **Images**: Customize the profile picture, logo, and watermark to suit your needs.
- **Colors**: You can change the colors of the boxes and text by modifying the RGB values used in the script.

## **License**

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## **Acknowledgments**
- Thanks to the **Pillow (PIL)** library for image processing and manipulation.
- Inspired by various ID card generation tutorials and projects.

---

### Example Visual:
If you wish to include a **preview image** or a **screenshot** of the generated ID card, it would be a good idea to add the image here using a URL or relative path if it's hosted in your repository.

