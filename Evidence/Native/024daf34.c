/* IL2CPP: Dino.BusSand.View.PicturePaper$$get_Aspect
float Dino_BusSand_View_PicturePaper__get_Aspect (Dino_BusSand_View_PicturePaper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$get_Aspect
   float Dino_BusSand_View_PicturePaper__get_Aspect (Dino_BusSand_View_PicturePaper_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_View_PicturePaper__get_Aspect_23daf34(long param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 024daf18 with catch @ 024daf34 */
  iVar1 = *(int *)(param_1 + 0x24);
                    /* try { // try from 024daf38 to 025daf3f has its CatchHandler @ 024daf48 */
                    /* try { // try from 024daf40 to 025daf4b has its CatchHandler @ 024dad4c */
  if (iVar1 < 2) {
    iVar1 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024daf38 with catch @ 024daf48
                        */
  return (float)*(int *)(param_1 + 0x20) / (float)iVar1;
}

