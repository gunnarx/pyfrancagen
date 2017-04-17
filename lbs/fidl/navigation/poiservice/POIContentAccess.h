// #includes

// Generated from Franca IDL Interface 
// Generated <timestamp>

class POIContentAccess
{
  public:
     POIContentAccess ();
     POIContentAccess (const Cat& c);
     POIContentAccess & operator=(const POIContentAccess & c);
    ~POIContentAccess ();

    
     registerContentAccessModule (

          
          moduleName,
          

          
          camId&,
          
          );

    
     unRegisterContentAccessModule (

          
          camId,
          

          
          );

    
     registerPoiCategories (

          
          camId,
          
          poiCategories,
          

          
          );

    
     updateCategories (

          
          camId,
          
          poiCategories,
          

          
          );

    
     addCategories (

          
          camId,
          
          poiCategories,
          

          
          poiCategoriesId&,
          
          );

    
     removeCategories (

          
          camId,
          
          poiCategories,
          

          
          );

    

  private:
    // none
};
