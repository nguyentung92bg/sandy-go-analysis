/* IL2CPP: Dino.BusSand.View.GrainParticles$$Lin
UnityEngine_Vector4_o Dino_BusSand_View_GrainParticles__Lin (UnityEngine_Color32_o c, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$Lin
   UnityEngine_Vector4_o Dino_BusSand_View_GrainParticles__Lin (UnityEngine_Color32_o c, float glow,
   const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Lin_23b53f0(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c981 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c981 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = (uint)param_1;
  Dino_BusSand_RenderQuality__ShaderColor_238b0d8
            ((float)(uVar2 & 0xff) / 255.0,(float)(uVar2 >> 8 & 0xff) / 255.0,
             (float)(uVar2 >> 0x10 & 0xff) / 255.0,(float)(param_1 >> 0x18 & 0xff) / 255.0,0);
  return;
}

