/* IL2CPP: Dino.BusSand.View.GrainParticles$$Shade
UnityEngine_Vector4_o Dino_BusSand_View_GrainParticles__Shade (UnityEngine_Color32_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$Shade
   UnityEngine_Vector4_o Dino_BusSand_View_GrainParticles__Shade (UnityEngine_Color32_o c, const
   MethodInfo* method); */

undefined4 Dino_BusSand_View_GrainParticles__Shade_23b5490(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9c980 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c980 = 1;
  }
  uVar2 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  puVar1 = PTR_DAT_04cb27f8;
  if ((uVar2 & 1) == 0) {
    if (cRam0000000004f9bba3 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb0780);
      cRam0000000004f9bba3 = '\x01';
    }
    uVar4 = **(undefined4 **)(*(long *)PTR_DAT_04cb0780 + 0xb8);
  }
  else {
    uVar3 = (uint)param_1;
    fVar5 = (float)(uVar3 >> 8 & 0xff) / 255.0;
    fVar6 = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
    fVar7 = (float)(param_1 >> 0x18 & 0xff) / 255.0;
    if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_View_PackPalette__ShadowForMain_2390424
                      ((float)(uVar3 & 0xff) / 255.0,fVar5,fVar6,fVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_RenderQuality__ShaderColor_238b0d8(uVar4,fVar5,fVar6,fVar7,0);
    UnityEngine_Random__get_value_43b6570(0);
  }
  return uVar4;
}

