/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Quiet
void Dino_BusSand_App_UI_HomeToonRig__Quiet (UnityEngine_Renderer_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Quiet
   void Dino_BusSand_App_UI_HomeToonRig__Quiet (UnityEngine_Renderer_o* r, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeToonRig__Quiet_22f487c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Renderer__set_shadowCastingMode_4373c54(param_1,0,0);
  UnityEngine_Renderer__set_receiveShadows_4373dcc(param_1,0,0);
  UnityEngine_Renderer__set_lightProbeUsage_4373e90(param_1,0,0);
  if ((bRam0000000004fa68ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf67a0,0,0);
    bRam0000000004fa68ca = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    if (pcRam0000000004fa6960 == (code *)0x0) {
      pcRam0000000004fa6960 = (code *)FUN_02132f40(&UNK_00e65570);
    }
                    /* WARNING: Could not recover jumptable at 0x04473fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6960)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

