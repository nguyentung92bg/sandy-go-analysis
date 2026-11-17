/* IL2CPP: Dino.BusSand.App.UI.KitSpin$$Update
void Dino_BusSand_App_UI_KitSpin__Update (Dino_BusSand_App_UI_KitSpin_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044d13f8) */
/* WARNING: Removing unreachable block (ram,0x044d141c) */
/* WARNING: Removing unreachable block (ram,0x044d1430) */
/* WARNING: Removing unreachable block (ram,0x044d1434) */
/* WARNING: Removing unreachable block (ram,0x044d143c) */
/* WARNING: Removing unreachable block (ram,0x044d1448) */
/* WARNING: Removing unreachable block (ram,0x044d145c) */
/* WARNING: Removing unreachable block (ram,0x044d147c) */
/* WARNING: Removing unreachable block (ram,0x044d1478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitSpin$$Update
   void Dino_BusSand_App_UI_KitSpin__Update (Dino_BusSand_App_UI_KitSpin_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitSpin__Update_228d840(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c1a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1a2 = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
  if (lVar2 != 0) {
    UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20a74 * 0.0,0);
    UnityEngine_Transform__get_localRotation_43d14b0();
    if ((bRam0000000004fa8b3a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00);
      bRam0000000004fa8b3a = 1;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
    if (pcRam0000000004fa8bd0 == (code *)0x0) {
      pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
    }
    (*pcRam0000000004fa8bd0)(lVar2,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

