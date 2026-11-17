/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<RunPopup>d__98$$MoveNext
bool Dino_BusSand_App_Meta_GiftPackFeature__RunPopup_d__98__MoveNext (Dino_BusSand_App_Meta_GiftPackFeature__RunPopup_d__98_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<RunPopup>d__98$$MoveNext
   bool Dino_BusSand_App_Meta_GiftPackFeature__RunPopup_d__98__MoveNext
   (Dino_BusSand_App_Meta_GiftPackFeature__RunPopup_d__98_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GiftPackFeature__RunPopup_d__98__MoveNext_223e3a8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000004f9bee6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb3698);
    FUN_02132f7c(PTR_DAT_04cb36a0);
    FUN_02132f7c(PTR_DAT_04caec90);
    bRam0000000004f9bee6 = 1;
  }
  puVar2 = PTR_DAT_04cb36a0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar7 = (long *)(param_1 + 0x30);
    *plVar7 = lVar3;
    thunk_FUN_02134474(plVar7,lVar3);
    puVar2 = PTR_DAT_04caa458;
    lVar3 = *plVar7;
    if (lVar3 == 0) goto LAB_0233e4f4;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(lVar3 + 0x10) = 0;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)PTR_DAT_04cb3698,0);
    if (lVar6 == 0) goto LAB_0233e4f4;
    uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__TryOpen_223aadc
                      (lVar6,uVar1,uVar4,*(undefined8 *)PTR_DAT_04caec90);
    if ((uVar5 & 1) == 0) {
      return 0;
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
LAB_0233e4f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

