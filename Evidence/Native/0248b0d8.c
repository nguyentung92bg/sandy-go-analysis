/* IL2CPP: Dino.BusSand.RenderQuality$$ShaderColor
UnityEngine_Color_o Dino_BusSand_RenderQuality__ShaderColor (UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$ShaderColor
   UnityEngine_Color_o Dino_BusSand_RenderQuality__ShaderColor (UnityEngine_Color_o c, const
   MethodInfo* method); */

undefined4
Dino_BusSand_RenderQuality__ShaderColor_238b0d8
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = UnityEngine_QualitySettings__get_activeColorSpace_436ea1c(0);
  if (iVar1 == 1) {
    param_1 = UnityEngine_Mathf__GammaToLinearSpace_43afb2c(param_1,0);
    UnityEngine_Mathf__GammaToLinearSpace_43afb2c(param_2,0);
    UnityEngine_Mathf__GammaToLinearSpace_43afb2c(param_3,0);
  }
  return param_1;
}

