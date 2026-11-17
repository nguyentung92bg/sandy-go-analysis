/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$UpdateThemeIndex
void Dino_BusSand_App_Meta_GiftPackFeature__UpdateThemeIndex (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$UpdateThemeIndex
   void Dino_BusSand_App_Meta_GiftPackFeature__UpdateThemeIndex
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__UpdateThemeIndex_2235868
               (undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000004f9bea3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3400);
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 023358a8 to 024358fb has its CatchHandler @ 023358a8
                       catch() { ... } // from try @ 023358a8 with catch @ 023358a8
                       catch() { ... } // from try @ 02335a64 with catch @ 023358a8
                       catch() { ... } // from try @ 02335ac8 with catch @ 023358a8
                       catch() { ... } // from try @ 02335b08 with catch @ 023358a8
                       catch() { ... } // from try @ 02335b58 with catch @ 023358a8 */
    bRam0000000004f9bea3 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Themes_2235350(param_1,param_2);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      if (param_3 != 0) {
        iVar5 = -1;
        goto LAB_02335938;
      }
    }
    else if (param_2 != 0) {
      if (*(int *)(param_2 + 0x50) - 1U < 2) {
        if (param_3 == 0) goto LAB_0233594c;
        uVar1 = *(undefined4 *)(param_3 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 023358fc to 02435907 has its CatchHandler @ 02335ad4 */
        iVar3 = System_Math__Max_4830fc8(1,uVar1,0);
                    /* try { // try from 0233590c to 02435917 has its CatchHandler @ 02335ad0 */
        iVar5 = *(int *)(lVar4 + 0x18);
        iVar2 = 0;
        if (iVar5 != 0) {
          iVar2 = (iVar3 + -1) / iVar5;
        }
        iVar5 = (iVar3 + -1) - iVar2 * iVar5;
      }
      else {
        if (*(int *)(param_2 + 0x50) != 0) {
          return;
        }
                    /* try { // try from 02335930 to 02435933 has its CatchHandler @ 02335a88 */
        if (param_3 == 0) goto LAB_0233594c;
        iVar5 = 0;
      }
LAB_02335938:
      *(int *)(param_3 + 0x88) = iVar5;
      return;
    }
  }
LAB_0233594c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

