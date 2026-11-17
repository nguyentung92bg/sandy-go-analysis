/* IL2CPP: Dino.BusSand.App.ShaderWarmup$$Load
UnityEngine_ShaderVariantCollection_o* Dino_BusSand_App_ShaderWarmup__Load (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.ShaderWarmup$$Load
   UnityEngine_ShaderVariantCollection_o* Dino_BusSand_App_ShaderWarmup__Load (const MethodInfo*
   method); */

long Dino_BusSand_App_ShaderWarmup__Load_215ddbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04cabf08;
  puVar2 = PTR_DAT_04cab020;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0225ddc4 to 0235ddcb has its CatchHandler @ 0225de08 */
                    /* try { // try from 0225ddcc to 0235de1b has its CatchHandler @ 0225dda8 */
  if ((bRam0000000004f9b809 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 0225ddc4 with catch @ 0225de08 */
    FUN_02132f7c(PTR_DAT_04cab020);
    FUN_02132f7c(PTR_DAT_04cabf10);
    FUN_02132f7c(PTR_DAT_04cabee0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cabf08);
    bRam0000000004f9b809 = 1;
  }
  uStack_64 = 0;
  uStack_70 = 0;
  lVar5 = UnityEngine_Resources__Load_object__2891e2c(*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  lVar12 = 0;
  if ((uVar6 & 1) == 0) {
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabf10);
    UnityEngine_ShaderVariantCollection___ctor_43cbf84(lVar12,0);
                    /* try { // try from 0225deb0 to 0235df27 has its CatchHandler @ 0225deb0
                       catch(type#1 @ 00000000) { ... } // from try @ 0225deb0 with catch @ 0225deb0
                       catch(type#1 @ 00000000) { ... } // from try @ 0225df34 with catch @ 0225deb0
                       catch(type#1 @ 00000000) { ... } // from try @ 0225df58 with catch @ 0225deb0
                       catch(type#1 @ 00000000) { ... } // from try @ 0225df90 with catch @ 0225deb0
                        */
    if (((lVar5 == 0) || (lVar7 = UnityEngine_TextAsset__get_text_43c62e8(lVar5,0), lVar7 == 0)) ||
       (lVar7 = System_String__Split_46d50c0(lVar7,10,0,0), puVar3 = PTR_DAT_04cabee0,
       puVar2 = PTR_DAT_04caa038, lVar7 == 0)) {
LAB_0225e140:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar11) {
      uVar14 = 0;
      do {
        if (uVar11 <= uVar14) {
LAB_0225e144:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar8 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
                    /* try { // try from 0225df28 to 0235df33 has its CatchHandler @ 0225df68 */
                    /* try { // try from 0225df34 to 0235df47 has its CatchHandler @ 0225deb0 */
        if (((lVar8 == 0) || (lVar8 = System_String__Trim_46d6ee0(lVar8,0), lVar8 == 0)) ||
           (lVar8 = System_String__Split_46d50c0(lVar8,0x7c,0,0), lVar8 == 0)) goto LAB_0225e140;
                    /* try { // try from 0225df48 to 0235df57 has its CatchHandler @ 0225df64 */
                    /* try { // try from 0225df58 to 0235df7f has its CatchHandler @ 0225deb0 */
        if ((2 < *(int *)(lVar8 + 0x18)) &&
           (uVar6 = System_Int32__TryParse_482de64(*(undefined8 *)(lVar8 + 0x28),&uStack_64,0),
           (uVar6 & 1) != 0)) {
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0225e144;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225df48 with catch @ 0225df64
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225df28 with catch @ 0225df68
                        */
          uVar9 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)(lVar8 + 0x20),0);
          lVar13 = *(long *)puVar1;
          if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* try { // try from 0225df80 to 0235df8f has its CatchHandler @ 0225df98 */
            thunk_FUN_0218fdac(lVar13);
          }
                    /* try { // try from 0225df90 to 0235df9b has its CatchHandler @ 0225deb0 */
          uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
          uVar4 = uStack_64;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225df80 with catch @ 0225df98
                        */
          if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 0225dfb4 with catch @ 0225dfc8 */
            if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar8 = *(long *)(lVar8 + 0x30);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)(lVar8 + 0x10) < 1) {
              uVar10 = FUN_02133068(*(undefined8 *)puVar2,0);
            }
            else {
              uVar10 = System_String__Split_46d50c0(lVar8,0x20,0,0);
            }
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            UnityEngine_ShaderVariantCollection_ShaderVariant___ctor_43cc018
                      (&uStack_90,uVar9,uVar4,uVar10,0);
                    /* try { // try from 0225e028 to 0235e02f has its CatchHandler @ 0225e044 */
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uStack_a8 = uStack_88;
            uStack_b0 = uStack_90;
            uStack_a0 = uStack_80;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225e028 with catch @ 0225e044
                        */
            UnityEngine_ShaderVariantCollection__Add_43cc004(lVar12,&uStack_b0,0);
          }
          else {
                    /* try { // try from 0225df9c to 0235dfb3 has its CatchHandler @ 0225df9c
                       catch() { ... } // from try @ 0225df9c with catch @ 0225df9c
                       catch() { ... } // from try @ 0225dfb8 with catch @ 0225df9c */
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar3;
            }
                    /* try { // try from 0225dfb4 to 0235dfb7 has its CatchHandler @ 0225dfc8 */
                    /* try { // try from 0225dfb8 to 0235dfdb has its CatchHandler @ 0225df9c */
            *(int *)(*(long *)(lVar8 + 0xb8) + 0x14) = *(int *)(*(long *)(lVar8 + 0xb8) + 0x14) + 1;
          }
        }
        uVar11 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 0225e050 to 0235e083 has its CatchHandler @ 0225e050
                       catch() { ... } // from try @ 0225e050 with catch @ 0225e050
                       catch() { ... } // from try @ 0225e098 with catch @ 0225e050 */
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar11);
    }
    UnityEngine_Resources__UnloadAsset_43b78b0(lVar5,0);
  }
  return lVar12;
}

