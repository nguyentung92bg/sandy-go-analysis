/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ChangeName
System_String_o* Dino_BusSand_App_UI_HallScene__ChangeName (Dino_BusSand_App_UI_HallScene_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ChangeName
   System_String_o* Dino_BusSand_App_UI_HallScene__ChangeName (Dino_BusSand_App_UI_HallScene_o*
   __this, int32_t level, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HallScene__ChangeName_22d28e4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb6d70;
  puVar5 = (undefined8 *)PTR_DAT_04cb6d68;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6d68);
    FUN_02132f7c(PTR_DAT_04cb6d78);
    FUN_02132f7c(PTR_DAT_04cb6d70);
    FUN_02132f7c(PTR_DAT_04cb6d80);
    bRam0000000004f9c3c2 = 1;
  }
  if ((param_2 & 1) != 0) {
    puVar5 = (undefined8 *)puVar2;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *puVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Animation__GetClip_433662c(*(long *)(param_1 + 0x38),uVar6,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar6;
    }
  }
  puVar5 = (undefined8 *)PTR_DAT_04cb6d78;
  if ((param_2 & 1) == 0) {
    puVar5 = (undefined8 *)PTR_DAT_04cb6d80;
  }
  return *puVar5;
}

