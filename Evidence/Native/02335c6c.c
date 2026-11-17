/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HallIconPath
System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__HallIconPath (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HallIconPath
   System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__HallIconPath
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__HallIconPath_2235c6c
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9bea7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bea7 = 1;
  }
  lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme_22357ac(param_1,param_2);
                    /* try { // try from 02335ca8 to 02435cab has its CatchHandler @ 02335d5c */
                    /* try { // try from 02335cb8 to 02435cc3 has its CatchHandler @ 02335d6c */
  if ((lVar1 == 0) ||
     (uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar1 + 0x28),0),
     (uVar2 & 1) != 0)) {
                    /* try { // try from 02335cc4 to 02435ccb has its CatchHandler @ 02335d68 */
    lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
    if (lVar1 == 0) {
      lVar3 = *(long *)PTR_DAT_04ca9c30;
    }
    else {
                    /* try { // try from 02335cdc to 02435cdf has its CatchHandler @ 02335d50 */
      lVar3 = *(long *)PTR_DAT_04ca9c30;
      if (*(long *)(lVar1 + 0x98) != 0) {
        lVar3 = *(long *)(lVar1 + 0x98);
      }
    }
  }
  else {
                    /* try { // try from 02335cec to 02435cf7 has its CatchHandler @ 02335d64 */
    lVar3 = *(long *)(lVar1 + 0x28);
  }
                    /* try { // try from 02335cf8 to 02435cff has its CatchHandler @ 02335d60 */
  return lVar3;
}

