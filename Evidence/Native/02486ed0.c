/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__11
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__11 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__11
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__11
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__11_2386ed0
                (float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_88;
  undefined8 uStack_38;
  
  puVar6 = PTR_DAT_04cbbc58;
  puVar5 = PTR_DAT_04cbbc00;
  if ((bRam0000000004f9c879 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc58);
    FUN_02132f7c(PTR_DAT_04cbbc00);
    bRam0000000004f9c879 = 1;
  }
  lVar7 = FUN_02133068(*(undefined8 *)puVar6,2);
  uStack_38 = 0;
  System_ValueTuple_float__float____ctor_30f0afc(0,0x45160000,&uStack_38,*(undefined8 *)puVar5);
  uVar4 = _UNK_00e20b34;
  if (lVar7 == 0) {
LAB_024870ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uStack_38;
    uStack_88 = 0;
    System_ValueTuple_float__float____ctor_30f0afc
              (_UNK_00e20a94,uVar4,&uStack_88,*(undefined8 *)puVar5);
    uVar9 = *(ulong *)(lVar7 + 0x18);
    if ((uVar9 & 0xfffffffe) != 0) {
      uVar10 = uVar9 & 0xffffffff;
      *(undefined8 *)(lVar7 + 0x28) = uStack_88;
      fVar3 = _UNK_00e2030c;
      fVar2 = _UNK_00e200f8;
      fVar1 = _UNK_00e1fdf4;
      if ((int)uVar9 < 1) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = 0.0;
        uVar9 = 0;
        pfVar11 = (float *)(lVar7 + 0x24);
        do {
          if (uVar10 <= uVar9) goto LAB_024870a8;
          fVar17 = param_1 - pfVar11[-1];
          if (0.0 <= fVar17) {
            fVar12 = (float)func_0x049b5320(fVar17 * *pfVar11 * fVar1);
            fVar13 = (float)expf(fVar17 * -70.0);
            fVar15 = 0.0;
            if (fVar17 < fVar3) {
              plVar8 = *(long **)(param_2 + 0x18);
              if (plVar8 == (long *)0x0) goto LAB_024870ac;
              dVar14 = (double)(**(code **)(*plVar8 + 0x1b8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
              fVar15 = ((float)dVar14 + (float)dVar14 + -1.0) * fVar2;
            }
            fVar16 = fVar16 + fVar13 * fVar12 + fVar15;
          }
          uVar9 = uVar9 + 1;
          pfVar11 = pfVar11 + 2;
        } while ((long)uVar9 < (long)(int)uVar10);
      }
      return fVar16;
    }
  }
LAB_024870a8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

