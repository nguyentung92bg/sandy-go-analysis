/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ClipLength
float Dino_BusSand_App_UI_HallScene__ClipLength (UnityEngine_Animation_o* anim, System_String_o* clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ClipLength
   float Dino_BusSand_App_UI_HallScene__ClipLength (UnityEngine_Animation_o* anim, System_String_o*
   clip, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HallScene__ClipLength_22d2a10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3c5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 != 0) {
      lVar3 = UnityEngine_Animation__GetClip_433662c(param_1,param_2,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar2 & 1) == 0) goto LAB_023d2acc;
      if (lVar3 != 0) {
        if ((bRam0000000004fa4d91 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5ba0,0);
          bRam0000000004fa4d91 = 1;
        }
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
          if (pcRam0000000004fa4db8 == (code *)0x0) {
            pcRam0000000004fa4db8 = (code *)FUN_02132f40(&UNK_00e3d015);
          }
                    /* WARNING: Could not recover jumptable at 0x04438288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar5 = (*pcRam0000000004fa4db8)(lVar4);
          return auVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023d2acc:
  return ZEXT816(0);
}

