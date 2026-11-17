/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Amount
System_String_o* Dino_BusSand_App_UI_BattleRoyaleUi__Amount (int64_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Amount
   System_String_o* Dino_BusSand_App_UI_BattleRoyaleUi__Amount (int64_t v, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_04cae520;
  if ((bRam0000000004f9b9fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae520);
    bRam0000000004f9b9fd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9c4a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5db0,0);
    FUN_02132f7c(PTR_DAT_04cb5db8);
    FUN_02132f7c(PTR_DAT_04cb5dc0);
    bRam0000000004f9c4a6 = 1;
  }
  uStack_28 = 0;
  if ((long)param_1 < 100000) {
    uVar2 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffe8,0);
  }
  else {
    if (param_1 < 10000000) {
      uStack_28 = (param_1 & 0xffffffff) / 1000;
      uVar2 = System_Int64__ToString_482e7e4(&uStack_28,0);
      puVar3 = (undefined8 *)PTR_DAT_04cb5db0;
    }
    else {
      if (param_1 >> 0x1f != 0) {
        return *(undefined8 *)PTR_DAT_04cb5db8;
      }
      uStack_28 = (param_1 & 0xffffffff) / 1000000;
      uVar2 = System_Int64__ToString_482e7e4(&uStack_28,0);
      puVar3 = (undefined8 *)PTR_DAT_04cb5dc0;
    }
    uVar2 = System_String__Concat_46c82e0(uVar2,*puVar3,0);
  }
  return uVar2;
}

