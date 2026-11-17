/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<RunHallUIOpen>d__99$$MoveNext
bool Dino_BusSand_App_Meta_GiftPackFeature__RunHallUIOpen_d__99__MoveNext (Dino_BusSand_App_Meta_GiftPackFeature__RunHallUIOpen_d__99_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<RunHallUIOpen>d__99$$MoveNext
   bool Dino_BusSand_App_Meta_GiftPackFeature__RunHallUIOpen_d__99__MoveNext
   (Dino_BusSand_App_Meta_GiftPackFeature__RunHallUIOpen_d__99_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__RunHallUIOpen_d__99__MoveNext_223e090(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int iStack_24;
  
  uVar2 = param_1;
  if ((bRam0000000004f9bee5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb3678);
    FUN_02132f7c(PTR_DAT_04cb3680);
    FUN_02132f7c(PTR_DAT_04cb3688);
    FUN_02132f7c(PTR_DAT_04caec90);
    FUN_02132f7c(PTR_DAT_04cb3668);
    uVar2 = FUN_02132f7c(PTR_DAT_04cb34a8);
    bRam0000000004f9bee5 = 1;
  }
  puVar1 = PTR_DAT_04cb3688;
  iStack_24 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar6 = (long *)(param_1 + 0x30);
    *plVar6 = lVar3;
    uVar2 = thunk_FUN_02134474(plVar6,lVar3);
    if (*plVar6 == 0) goto LAB_0233e358;
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined1 *)(*plVar6 + 0x10) = 0;
    uVar2 = 0;
    if (lVar3 == 0) goto LAB_0233e358;
    uVar4 = System_String__StartsWith_46d11d4(lVar3,*(undefined8 *)PTR_DAT_04cb34a8,4,0);
    uVar2 = *(ulong *)(param_1 + 0x20);
    if ((uVar4 & 1) == 0) {
      if (uVar2 == 0) goto LAB_0233e358;
      uVar2 = System_String__StartsWith_46d11d4(uVar2,*(undefined8 *)PTR_DAT_04cb3668,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar2 = 0;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0233e358;
      uVar5 = System_String__Substring_46d6a94(*(long *)(param_1 + 0x20),7,0);
      uVar2 = System_Int32__Parse_482da80(uVar5,0);
      if (lVar7 == 0) goto LAB_0233e358;
      uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(lVar7,uVar2 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      lVar3 = *plVar6;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cb3680,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_GiftPackUi__OpenGoldenPanel_21abec4
                        (uVar2 & 0xffffffff,uVar5,*(undefined8 *)PTR_DAT_04caec90,0,0);
      uVar2 = 0;
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (uVar2 == 0) goto LAB_0233e358;
      uVar5 = System_String__Substring_46d6a94(uVar2,7,0);
      uVar2 = System_Int32__Parse_482da80(uVar5,0);
      if (lVar7 == 0) goto LAB_0233e358;
      uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__NeedShowGoldenCoinSettlement_223daa0
                        (lVar7,&iStack_24);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (iStack_24 != (int)uVar2) {
        return 0;
      }
      lVar3 = *plVar6;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cb3678,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_App_UI_GiftPackUi__OpenGoldenSettlement_21ac078
                        (uVar2 & 0xffffffff,uVar5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x10) != '\0') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_0233e358:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar2);
}

