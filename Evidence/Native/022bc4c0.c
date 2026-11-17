/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Install
void Dino_BusSand_App_UI_EventStakeUi__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Install
   void Dino_BusSand_App_UI_EventStakeUi__Install (const MethodInfo* method); */

void Dino_BusSand_App_UI_EventStakeUi__Install_21bc4c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04caf8c8;
  puVar4 = PTR_DAT_04caf8c0;
  puVar3 = PTR_DAT_04caf8b8;
  puVar2 = PTR_DAT_04caf8b0;
  puVar1 = PTR_DAT_04cac7e8;
  if ((bRam0000000004f9bac7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e8);
    FUN_02132f7c(PTR_DAT_04caf8b8);
    FUN_02132f7c(PTR_DAT_04caf8c8);
    FUN_02132f7c(PTR_DAT_04caf8c0);
    FUN_02132f7c(PTR_DAT_04caf8b0);
    bRam0000000004f9bac7 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Func_object__object__bool____ctor_37a6890(uVar6,0,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Func_object__object__bool____ctor_37a6890(uVar6,0,*(undefined8 *)puVar5,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

