/* IL2CPP: Dino.BusSand.App.UI.HallScene$$RotateName
System_String_o* Dino_BusSand_App_UI_HallScene__RotateName (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$RotateName
   System_String_o* Dino_BusSand_App_UI_HallScene__RotateName (Dino_BusSand_App_UI_HallScene_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HallScene__RotateName_22d26d0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6d58);
    FUN_02132f7c(PTR_DAT_04cb6d60);
    bRam0000000004f9c3c3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  puVar4 = (undefined8 *)PTR_DAT_04cb6d58;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Animation__GetClip_433662c
                      (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb6d60,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    puVar4 = (undefined8 *)PTR_DAT_04cb6d58;
    if ((uVar2 & 1) != 0) {
      puVar4 = (undefined8 *)PTR_DAT_04cb6d60;
    }
  }
  return *puVar4;
}

