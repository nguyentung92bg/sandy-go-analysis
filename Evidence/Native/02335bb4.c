/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PanelPath
System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__PanelPath (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PanelPath
   System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__PanelPath
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__PanelPath_2235bb4(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02335b98 with catch @ 02335bb8
                        */
  if ((bRam0000000004f9bea6 & 1) == 0) {
                    /* try { // try from 02335bd0 to 02435be7 has its CatchHandler @ 02335c18 */
    FUN_02132f7c(PTR_DAT_04cb3430);
    FUN_02132f7c(PTR_DAT_04caee38);
                    /* try { // try from 02335be8 to 02435c07 has its CatchHandler @ 02335b64 */
    bRam0000000004f9bea6 = 1;
  }
  lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme_22357ac(param_1,param_2);
  if (lVar1 != 0) {
                    /* try { // try from 02335c08 to 02435c17 has its CatchHandler @ 02335c18 */
    uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(lVar1 + 0x20),0);
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    if ((uVar2 & 1) == 0) goto LAB_02335c5c;
  }
                    /* catch() { ... } // from try @ 02335bd0 with catch @ 02335c18
                       catch() { ... } // from try @ 02335c08 with catch @ 02335c18 */
                    /* try { // try from 02335c1c to 02435c1f has its CatchHandler @ 02335c28 */
  lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
                    /* try { // try from 02335c20 to 02435c2b has its CatchHandler @ 02335b64 */
  puVar3 = (undefined8 *)PTR_DAT_04cb3430;
  if (lVar1 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02335c1c with catch @ 02335c28
                        */
                    /* try { // try from 02335c2c to 02435ca7 has its CatchHandler @ 02335c2c
                       catch() { ... } // from try @ 02335c2c with catch @ 02335c2c
                       catch() { ... } // from try @ 02335d38 with catch @ 02335c2c
                       catch() { ... } // from try @ 02335d9c with catch @ 02335c2c
                       catch() { ... } // from try @ 02335de4 with catch @ 02335c2c */
    uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(lVar1 + 0x90),0);
    puVar3 = (undefined8 *)(lVar1 + 0x90);
    if (((uVar2 & 1) != 0) && (puVar3 = (undefined8 *)PTR_DAT_04cb3430, *(int *)(lVar1 + 0x54) == 3)
       ) {
      puVar3 = (undefined8 *)PTR_DAT_04caee38;
    }
  }
LAB_02335c5c:
  return *puVar3;
}

