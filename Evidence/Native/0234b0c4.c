/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunHallUIOpen>d__169$$MoveNext
bool Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_d__169__MoveNext (Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_d__169_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunHallUIOpen>d__169$$MoveNext
   bool Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_d__169__MoveNext
   (Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_d__169_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_d__169__MoveNext_224b0c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 0234b0dc to 0244b17f has its CatchHandler @ 0234ae50 */
  if ((bRam0000000004f9bf9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cb3aa0);
    FUN_02132f7c(PTR_DAT_04cb3aa8);
    FUN_02132f7c(PTR_DAT_04cb3ab0);
    FUN_02132f7c(PTR_DAT_04cb3ab8);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cb3a28);
    FUN_02132f7c(PTR_DAT_04cb0758);
    bRam0000000004f9bf9b = 1;
  }
  puVar1 = PTR_DAT_04cb3ab8;
  if (*(int *)(param_1 + 0x10) == 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0234b268 with catch @ 0234b274
                        */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0234b180 to 0244b18b has its CatchHandler @ 0234b1c0 */
    System_Object___ctor_4870e5c(lVar2,0);
    plVar4 = (long *)(param_1 + 0x30);
    *plVar4 = lVar2;
                    /* try { // try from 0234b198 to 0244b1a7 has its CatchHandler @ 0234b1bc */
    thunk_FUN_02134474(plVar4,lVar2);
    if (*plVar4 == 0) goto LAB_0234b378;
                    /* try { // try from 0234b1a8 to 0244b1eb has its CatchHandler @ 0234ae50 */
    *(undefined8 *)(*plVar4 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_02134474();
    puVar1 = PTR_DAT_04cac690;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0234b378;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234b198 with catch @ 0234b1bc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234b180 with catch @ 0234b1c0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234aef0 with catch @ 0234b1c4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234aef8 with catch @ 0234b1c8
                        */
    uVar6 = *(undefined8 *)(param_1 + 0x28);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234aed0 with catch @ 0234b1cc
                        */
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x10) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234af18 with catch @ 0234b1d0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234aff4 with catch @ 0234b1d4
                        */
    uVar3 = System_String__op_Equality_46d1108(uVar6,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_04cb01b0;
    if ((uVar3 & 1) == 0) {
      uVar3 = System_String__op_Equality_46d1108(uVar6,*(undefined8 *)PTR_DAT_04cb3a28,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_String__op_Equality_46d1108(uVar6,*(undefined8 *)PTR_DAT_04cb0758,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar2 = *plVar4;
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb3ab0,0);
        uVar3 = Dino_BusSand_App_UI_PassportUi__OpenOpen_21db26c(uVar6,0);
      }
      else {
        lVar2 = *plVar4;
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb3aa8,0);
        uVar3 = Dino_BusSand_App_UI_PassportUi__OpenClose_21db1f0(uVar6,0);
      }
    }
    else {
                    /* try { // try from 0234b1ec to 0244b203 has its CatchHandler @ 0234b264 */
      if ((lVar5 == 0) ||
         (lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (lVar5,*(undefined8 *)PTR_DAT_04cb01b0), lVar2 == 0)) goto LAB_0234b378;
      if (*(char *)(lVar2 + 99) != '\0') {
        return 0;
      }
                    /* try { // try from 0234b204 to 0244b253 has its CatchHandler @ 0234ae50 */
      lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (lVar5,*(undefined8 *)puVar1);
      if (lVar2 == 0) goto LAB_0234b378;
      if (*(char *)(lVar2 + 0x62) == '\0') {
        Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward_2249918(lVar5,0,0);
      }
      lVar2 = *plVar4;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 0234b254 to 0244b263 has its CatchHandler @ 0234b264 */
      System_Action___ctor_47b5ed0(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb3aa0,0);
                    /* catch() { ... } // from try @ 0234b1ec with catch @ 0234b264
                       catch() { ... } // from try @ 0234b254 with catch @ 0234b264 */
      uVar3 = Dino_BusSand_App_UI_PassportUi__OpenGet_21db2d4(uVar6,0);
                    /* try { // try from 0234b268 to 0244b26b has its CatchHandler @ 0234b274 */
    }
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 0234b284 to 0244b38f has its CatchHandler @ 0234b284
                       catch() { ... } // from try @ 0234b284 with catch @ 0234b284
                       catch() { ... } // from try @ 0234b4c4 with catch @ 0234b284
                       catch() { ... } // from try @ 0234b5b4 with catch @ 0234b284
                       catch() { ... } // from try @ 0234b61c with catch @ 0234b284
                       catch() { ... } // from try @ 0234b664 with catch @ 0234b284
                       catch() { ... } // from try @ 0234b934 with catch @ 0234b284
                       catch() { ... } // from try @ 0234b9fc with catch @ 0234b284
                       catch() { ... } // from try @ 0234bb8c with catch @ 0234b284
                       catch() { ... } // from try @ 0234bc18 with catch @ 0234b284
                       catch() { ... } // from try @ 0234bc64 with catch @ 0234b284 */
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x10) != '\0') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_0234b378:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

