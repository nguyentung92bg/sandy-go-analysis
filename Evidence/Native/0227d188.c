/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyGameplayRenderSettings
void Dino_BusSand_App_RenderSetup__ApplyGameplayRenderSettings (bool gp3, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyGameplayRenderSettings
   void Dino_BusSand_App_RenderSetup__ApplyGameplayRenderSettings (bool gp3, const MethodInfo*
   method); */

void Dino_BusSand_App_RenderSetup__ApplyGameplayRenderSettings_217d188(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UnityEngine_RenderSettings__set_ambientMode_43745c8(3,0);
  uVar1 = 0x3f800000;
  uVar2 = _UNK_00e20ae8;
  uVar3 = _UNK_00e1ffbc;
  if ((param_1 & 1) == 0) {
    uVar1 = _UNK_00e204c8;
    uVar2 = _UNK_00e204c8;
    uVar3 = _UNK_00e204c8;
  }
  UnityEngine_RenderSettings__set_ambientLight_43749f4(uVar1,uVar2,uVar3,0x3f800000,0);
  UnityEngine_RenderSettings__get_ambientLight_4374970(0);
  UnityEngine_RenderSettings__set_ambientSkyColor_4374688(0);
  UnityEngine_RenderSettings__set_ambientEquatorColor_437478c
            (_UNK_00e20524,0x3e000000,_UNK_00e207d0,0x3f800000,0);
  UnityEngine_RenderSettings__set_ambientGroundColor_4374890
            (_UNK_00e20834,_UNK_00e20654,_UNK_00e1fef8,0x3f800000,0);
  UnityEngine_RenderSettings__set_ambientIntensity_4374938(0x3f800000,0);
  UnityEngine_RenderSettings__set_subtractiveShadowColor_4374af8
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  UnityEngine_RenderSettings__set_fog_4374400(0,0);
                    /* try { // try from 0227d258 to 0237d26b has its CatchHandler @ 0227d258
                       catch() { ... } // from try @ 0227d258 with catch @ 0227d258
                       catch() { ... } // from try @ 0227d274 with catch @ 0227d258
                       catch() { ... } // from try @ 0227d28c with catch @ 0227d258
                       catch() { ... } // from try @ 0227d2a4 with catch @ 0227d258 */
                    /* try { // try from 0227d26c to 0237d273 has its CatchHandler @ 0227d2c0 */
                    /* try { // try from 0227d274 to 0237d287 has its CatchHandler @ 0227d258 */
  UnityEngine_RenderSettings__set_fogColor_43744e8(0,_UNK_00e20098,_UNK_00e20990,0x3f800000,0);
  UnityEngine_RenderSettings__set_fogMode_43744ac(1,0);
                    /* try { // try from 0227d288 to 0237d28b has its CatchHandler @ 0227d2bc */
                    /* try { // try from 0227d28c to 0237d29f has its CatchHandler @ 0227d258 */
  UnityEngine_RenderSettings__set_fogStartDistance_437443c(0,0);
  UnityEngine_RenderSettings__set_fogEndDistance_4374474(0x42820000,0);
                    /* try { // try from 0227d2a0 to 0237d2a3 has its CatchHandler @ 0227d2b8 */
                    /* try { // try from 0227d2a4 to 0237d2d3 has its CatchHandler @ 0227d258 */
  UnityEngine_RenderSettings__set_fogDensity_4374568(_UNK_00e20448,0);
                    /* catch() { ... } // from try @ 0227d2a0 with catch @ 0227d2b8 */
  UnityEngine_RenderSettings__set_skybox_4374c00(0,0);
                    /* catch() { ... } // from try @ 0227d288 with catch @ 0227d2bc */
                    /* catch() { ... } // from try @ 0227d26c with catch @ 0227d2c0 */
  UnityEngine_RenderSettings__set_defaultReflectionMode_4374fb8(1,0);
  UnityEngine_RenderSettings__set_customReflectionTexture_4374ea0(0,0);
  if (pcRam0000000004fa69f0 == (code *)0x0) {
    pcRam0000000004fa69f0 = (code *)FUN_02132f40(&UNK_00e5a4d0);
  }
                    /* WARNING: Could not recover jumptable at 0x04474fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa69f0)(0x3f800000);
  return;
}

