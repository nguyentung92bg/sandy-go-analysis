/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$ChangeNumToKM
System_String_o* Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM (int64_t num, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$ChangeNumToKM
   System_String_o* Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM (int64_t num, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uStack_28;
  ulong uStack_18;
  
  uStack_18 = param_1;
  if ((bRam0000000004f9c4a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5db0);
    FUN_02132f7c(PTR_DAT_04cb5db8);
    FUN_02132f7c(PTR_DAT_04cb5dc0);
    bRam0000000004f9c4a6 = 1;
  }
  uStack_28 = 0;
  if ((long)param_1 < 100000) {
    uVar1 = System_Int64__ToString_482e7e4(&uStack_18,0);
  }
  else {
    if (param_1 < 10000000) {
      uStack_28 = (param_1 & 0xffffffff) / 1000;
      uVar1 = System_Int64__ToString_482e7e4(&uStack_28,0);
      puVar2 = (undefined8 *)PTR_DAT_04cb5db0;
    }
    else {
      if (param_1 >> 0x1f != 0) {
        return *(undefined8 *)PTR_DAT_04cb5db8;
      }
      uStack_28 = (param_1 & 0xffffffff) / 1000000;
      uVar1 = System_Int64__ToString_482e7e4(&uStack_28,0);
      puVar2 = (undefined8 *)PTR_DAT_04cb5dc0;
    }
    uVar1 = System_String__Concat_46c82e0(uVar1,*puVar2,0);
  }
  return uVar1;
}

