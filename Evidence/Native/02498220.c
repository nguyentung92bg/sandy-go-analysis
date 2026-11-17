/* IL2CPP: Dino.BusSand.View.Fx$$MakeSystem
UnityEngine_ParticleSystem_o* Dino_BusSand_View_Fx__MakeSystem (Dino_BusSand_View_Fx_o* __this, System_String_o* name, UnityEngine_Material_o* mat, float gravity, bool sizeFade, bool colorFade, float rotSpeed, bool stretch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$MakeSystem
   UnityEngine_ParticleSystem_o* Dino_BusSand_View_Fx__MakeSystem (Dino_BusSand_View_Fx_o* __this,
   System_String_o* name, UnityEngine_Material_o* mat, float gravity, bool sizeFade, bool colorFade,
   float rotSpeed, bool stretch, const MethodInfo* method); */

long Dino_BusSand_View_Fx__MakeSystem_2398220
               (undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04caa070;
                    /* catch() { ... } // from try @ 02498214 with catch @ 02498238 */
                    /* try { // try from 0249823c to 02598243 has its CatchHandler @ 0249824c */
                    /* try { // try from 02498244 to 0259824f has its CatchHandler @ 02497ff0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024981ec with catch @ 0249824c
                       catch(type#2 @ 00000000) { ... } // from try @ 0249823c with catch @ 0249824c
                        */
  if ((bRam0000000004f9c8ea & 1) == 0) {
                    /* try { // try from 02498270 to 0259851b has its CatchHandler @ 02498270
                       catch() { ... } // from try @ 02498270 with catch @ 02498270
                       catch() { ... } // from try @ 02498a78 with catch @ 02498270
                       catch() { ... } // from try @ 02498ab0 with catch @ 02498270
                       catch() { ... } // from try @ 02498fec with catch @ 02498270
                       catch() { ... } // from try @ 02499080 with catch @ 02498270
                       catch() { ... } // from try @ 0249914c with catch @ 02498270
                       catch() { ... } // from try @ 0249932c with catch @ 02498270
                       catch() { ... } // from try @ 02499360 with catch @ 02498270 */
    FUN_02132f7c(PTR_DAT_04cb0f08);
    FUN_02132f7c(PTR_DAT_04cbc220);
    FUN_02132f7c(PTR_DAT_04cbc228);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc198);
    FUN_02132f7c(PTR_DAT_04cbc1a0);
    FUN_02132f7c(PTR_DAT_04cbc1a8);
    FUN_02132f7c(PTR_DAT_04cb0f10);
    bRam0000000004f9c8ea = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,param_4,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
    uVar5 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
    puVar2 = PTR_DAT_04cbc220;
    if (lVar4 == 0) goto LAB_024988b8;
    UnityEngine_Transform__SetParent_43d1e34(lVar4,uVar5,0,0);
    lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_024988b8;
    UnityEngine_ParticleSystem__Stop_44362e0(lVar4,1,0,0);
    uStack_68 = UnityEngine_ParticleSystem__get_main_443295c(lVar4,0);
    UnityEngine_ParticleSystem_MainModule__set_loop_4432b60(&uStack_68,0,0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake_4432c9c(&uStack_68,0,0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace_4433ffc(&uStack_68,1,0);
    UnityEngine_ParticleSystem_MainModule__set_maxParticles_4433ec4(&uStack_68,3000,0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_44330ec(&uStack_190,param_1,0);
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    UnityEngine_ParticleSystem_MainModule__set_gravityModifier_4437b00(&uStack_68,&uStack_b0,0);
    UnityEngine_ParticleSystem_MainModule__set_scalingMode_4434134(&uStack_68,2,0);
    uStack_70 = UnityEngine_ParticleSystem__get_emission_4432f0c(lVar4,0);
    UnityEngine_ParticleSystem_EmissionModule__set_enabled_4432fc8(&uStack_70,0,0);
    uStack_78 = UnityEngine_ParticleSystem__get_shape_4437314(lVar4,0);
    UnityEngine_ParticleSystem_ShapeModule__set_enabled_4437d30(&uStack_78,0,0);
    if ((param_6 & 1) != 0) {
      uStack_80 = UnityEngine_ParticleSystem__get_sizeOverLifetime_4437434(lVar4,0);
      UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled_4438834(&uStack_80,1,0);
      lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb0f10,4);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      UnityEngine_Keyframe___ctor_43511e8(0,_UNK_00e2098c,&uStack_d0,0);
      if (lVar6 == 0) goto LAB_024988b8;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_024988bc;
      *(undefined4 *)(lVar6 + 0x38) = uStack_b8;
      *(undefined8 *)(lVar6 + 0x28) = uStack_c8;
      *(undefined8 *)(lVar6 + 0x20) = uStack_d0;
      uVar1 = _UNK_00e20328;
      *(ulong *)(lVar6 + 0x30) = uStack_c0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      UnityEngine_Keyframe___ctor_43511e8(uVar1,0x3f800000,&uStack_f0,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_024988bc;
      *(undefined4 *)(lVar6 + 0x54) = uStack_d8;
      *(ulong *)(lVar6 + 0x4c) = uStack_e0;
      *(undefined8 *)(lVar6 + 0x44) = uStack_e8;
      *(undefined8 *)(lVar6 + 0x3c) = uStack_f0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      UnityEngine_Keyframe___ctor_43511e8(_UNK_00e20994,_UNK_00e1fea8,&uStack_110,0);
                    /* try { // try from 0249851c to 0259852b has its CatchHandler @ 024992bc */
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_024988bc;
                    /* try { // try from 02498538 to 0259854f has its CatchHandler @ 024992b8 */
      *(undefined8 *)(lVar6 + 0x60) = uStack_108;
      *(undefined8 *)(lVar6 + 0x58) = uStack_110;
      *(undefined4 *)(lVar6 + 0x70) = uStack_f8;
      *(undefined8 *)(lVar6 + 0x68) = uStack_100;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
                    /* try { // try from 0249855c to 02598567 has its CatchHandler @ 024992b4 */
      UnityEngine_Keyframe___ctor_43511e8(0x3f800000,0,&uStack_130,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_024988bc;
                    /* try { // try from 02498578 to 025985ab has its CatchHandler @ 024992c4 */
      *(undefined4 *)(lVar6 + 0x8c) = uStack_118;
      puVar2 = PTR_DAT_04cb0f08;
      *(undefined8 *)(lVar6 + 0x84) = uStack_120;
      *(undefined8 *)(lVar6 + 0x7c) = uStack_128;
      *(undefined8 *)(lVar6 + 0x74) = uStack_130;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      UnityEngine_AnimationCurve___ctor_4351c68(uVar5,lVar6,0);
                    /* try { // try from 024985ac to 025985b7 has its CatchHandler @ 02499280 */
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_44380d8(0x3f800000,&uStack_190,uVar5,0);
                    /* try { // try from 024985cc to 025985d3 has its CatchHandler @ 02499278 */
      uStack_148 = uStack_188;
      uStack_150 = uStack_190;
      uStack_138 = uStack_178;
      uStack_140 = uStack_180;
      UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size_4438878(&uStack_80,&uStack_150,0);
    }
    if ((param_7 & 1) != 0) {
      uStack_88 = UnityEngine_ParticleSystem__get_colorOverLifetime_44373ec(lVar4,0);
      UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled_44386e8(&uStack_88,1,0);
                    /* try { // try from 02498604 to 0259860b has its CatchHandler @ 024992e8 */
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc1a8);
      UnityEngine_Gradient___ctor_43ab938(lVar6,0);
      lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04cbc1a0,2);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      UnityEngine_GradientColorKey___ctor_43ab7d0
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0,&uStack_d0,0);
      if (lVar7 == 0) goto LAB_024988b8;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_024988bc:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar7 + 0x28) = uStack_c8;
      *(undefined8 *)(lVar7 + 0x20) = uStack_d0;
                    /* try { // try from 02498680 to 0259868b has its CatchHandler @ 024992ec */
      *(undefined4 *)(lVar7 + 0x30) = (undefined4)uStack_c0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      UnityEngine_GradientColorKey___ctor_43ab7d0
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_f0,0);
      puVar2 = PTR_DAT_04cbc198;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_024988bc;
      *(undefined4 *)(lVar7 + 0x44) = (undefined4)uStack_e0;
      *(undefined8 *)(lVar7 + 0x3c) = uStack_e8;
      *(undefined8 *)(lVar7 + 0x34) = uStack_f0;
      lVar8 = FUN_02133068(*(undefined8 *)puVar2,3);
      uStack_110 = 0;
      UnityEngine_GradientAlphaKey___ctor_43ab7e0(0x3f800000,0,&uStack_110,0);
      uVar1 = _UNK_00e20094;
      if (lVar8 == 0) goto LAB_024988b8;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_024988bc;
                    /* try { // try from 02498700 to 02598707 has its CatchHandler @ 024992d4 */
      *(undefined8 *)(lVar8 + 0x20) = uStack_110;
                    /* try { // try from 02498710 to 0259871b has its CatchHandler @ 024992d0 */
      uStack_130 = 0;
      UnityEngine_GradientAlphaKey___ctor_43ab7e0(0x3f800000,uVar1,&uStack_130,0);
                    /* try { // try from 0249871c to 02598723 has its CatchHandler @ 024992dc */
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_024988bc;
                    /* try { // try from 0249872c to 02598737 has its CatchHandler @ 024992d8 */
      *(undefined8 *)(lVar8 + 0x28) = uStack_130;
      uStack_158 = 0;
      UnityEngine_GradientAlphaKey___ctor_43ab7e0(0,0x3f800000,&uStack_158,0);
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_024988bc;
      *(undefined8 *)(lVar8 + 0x30) = uStack_158;
      if (lVar6 == 0) goto LAB_024988b8;
      UnityEngine_Gradient__SetKeys_43abc44(lVar6,lVar7,lVar8,0);
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_4438340(&uStack_190,lVar6,0);
      uStack_1c8 = uStack_188;
      uStack_1d0 = uStack_190;
      uStack_1b8 = uStack_178;
      uStack_1c0 = uStack_180;
      uStack_1a8 = uStack_168;
      uStack_1b0 = uStack_170;
      uStack_1a0 = uStack_160;
      UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_443872c
                (&uStack_88,&uStack_1d0,0);
    }
    puVar2 = PTR_DAT_04cbc228;
                    /* try { // try from 024987b4 to 025987c3 has its CatchHandler @ 024991c4 */
    if (param_2 != 0.0) {
      uStack_90 = UnityEngine_ParticleSystem__get_rotationOverLifetime_443747c(lVar4,0);
      UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_enabled_4438970(&uStack_90,1,0);
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_4438120(-param_2,param_2,&uStack_190,0);
      uStack_1e8 = uStack_188;
      uStack_1f0 = uStack_190;
      uStack_1d8 = uStack_178;
      uStack_1e0 = uStack_180;
      UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_z_44389b4(&uStack_90,&uStack_1f0,0)
      ;
    }
    lVar3 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar3,*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar3,param_5,0);
      UnityEngine_ParticleSystemRenderer__set_renderMode_443a370(lVar3,param_8 & 1,0);
      if ((param_8 & 1) != 0) {
                    /* try { // try from 0249884c to 02598857 has its CatchHandler @ 02499218 */
        UnityEngine_ParticleSystemRenderer__set_velocityScale_443a960(_UNK_00e20af8,lVar3,0);
        UnityEngine_ParticleSystemRenderer__set_lengthScale_443a7d8(_UNK_00e20178,lVar3,0);
      }
      UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar3,0,0);
      UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar3,0,0);
      UnityEngine_ParticleSystem__Play_443620c(lVar4,0);
                    /* try { // try from 024988a8 to 025988af has its CatchHandler @ 02499298 */
      return lVar4;
    }
  }
LAB_024988b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

