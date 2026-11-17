/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$NewMat
UnityEngine_Material_o* Dino_BusSand_View_EndSuctionCue__NewMat (UnityEngine_Shader_o* shader, System_String_o* name, int32_t dst, int32_t queue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$NewMat
   UnityEngine_Material_o* Dino_BusSand_View_EndSuctionCue__NewMat (UnityEngine_Shader_o* shader,
   System_String_o* name, int32_t dst, int32_t queue, const MethodInfo* method); */

long Dino_BusSand_View_EndSuctionCue__NewMat_2395ac4
               (undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cab588;
  if ((bRam0000000004f9c8e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    bRam0000000004f9c8e1 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Material___ctor_437b5a8(lVar4,param_1,0);
  puVar3 = PTR_DAT_04cbc148;
  puVar2 = PTR_DAT_04cb72c0;
  puVar1 = PTR_DAT_04cb72a0;
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar4,param_2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_View_EndSuctionCue__Tex_2396614();
    UnityEngine_Material__set_mainTexture_437bd28(lVar4,uVar5,0);
    UnityEngine_Material__set_renderQueue_437c9d8(lVar4,param_4,0);
    UnityEngine_Material__SetFloat_4383048(0x40a00000,lVar4,*(undefined8 *)puVar1,0);
    UnityEngine_Material__SetFloat_4383048((float)param_3,lVar4,*(undefined8 *)puVar2,0);
    UnityEngine_Material__SetColor_437bcac
              (0x3f800000,0x3f800000,0x3f800000,0,lVar4,
               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),0);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

