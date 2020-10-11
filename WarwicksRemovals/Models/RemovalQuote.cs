using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WarwicksRemovals.Models
{
    public class RemovalQuote
    {
        public int RemovalQuoteID { get; set; }

        [Display(Name = "Salutation")]
        [StringLength(20)]
        public string Title { get; set; }

        [Display(Name = "First name *")]
        [StringLength(50)]
        [Required]
        public string Forename { get; set; }

        [Display(Name = "Surname *")]
        [StringLength(50)]
        [Required]
        public string Surname { get; set; }

        [Display(Name = "Company name")]
        [StringLength(100)]
        public string Company { get; set; }

        [Display(Name = "Move date *")]
        [StringLength(100)]
        [Required]
        public string MoveDate { get; set; }

        [Display(Name = "Landline **")]
        [DataType(DataType.PhoneNumber)]
        [StringLength(15)]
        public string TelNumber { get; set; }

        [Display(Name = "Extension")]
        public int? TelExtension { get; set; }

        [Display(Name = "Mobile number **")]
        [DataType(DataType.PhoneNumber)]
        [StringLength(15)]
        public string Mobile { get; set; }

        [Display(Name = "Email address *")]
        [StringLength(200)]
        [DataType(DataType.EmailAddress)]
        public string Email { get; set; }

        //Moving From
        [Display(Name = "House Name/No *")]
        [StringLength(200)]
        [Required]
        public string FromAddress1 { get; set; }

        [Display(Name = "Address line 2")]
        [StringLength(200)]
        public string FromAddress2 { get; set; }

        [Display(Name = "Address line 3")]
        [StringLength(200)]
        public string FromAddress3 { get; set; }

        [Display(Name = "Address line 4")]
        [StringLength(200)]
        public string FromAddress4 { get; set; }

        [Display(Name = "Postcode")]
        [StringLength(8)]
        [DataType(DataType.PostalCode)]
        [Required]
        public string FromPostcode { get; set; }

        [Display(Name = "Property type *")]
        [Required]
        public int FromPropertyType { get; set; }

        [Display(Name = "No. of bedrooms")]
        public int FromNumBedrooms { get; set; }

        //Moving To
        [Display(Name = "Storage")]
        public bool IsMovingToStorage { get; set; }

        [Display(Name = "House Name/No *")]
        [StringLength(200)]
        public string ToAddress1 { get; set; }

        [Display(Name = "Address line 2")]
        [StringLength(200)]
        public string ToAddress2 { get; set; }

        [Display(Name = "Address line 3")]
        [StringLength(200)]
        public string ToAddress3 { get; set; }

        [Display(Name = "Address line 4")]
        [StringLength(200)]
        public string ToAddress4 { get; set; }

        [Display(Name = "Postcode")]
        [StringLength(8)]
        [DataType(DataType.PostalCode)]
        public string ToPostcode { get; set; }

        [Display(Name = "Property type *")]
        public int ToPropertyType { get; set; }

        [Display(Name = "No. of bedrooms")]
        public int ToNumBedrooms { get; set; }

        [Display(Name = "Additional info")]
        [StringLength(1000)]
        public string Comments { get; set; }
    }
}
