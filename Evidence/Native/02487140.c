/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__13
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__13 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__13
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__13
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__13_2387140
                (float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c87a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc60);
    FUN_02132f7c(PTR_DAT_04cbbc68);
    FUN_02132f7c(PTR_DAT_04cbbc70);
    FUN_02132f7c(PTR_DAT_04cbbc78);
    bRam0000000004f9c87a = 1;
  }
  puVar4 = PTR_DAT_04cbbc68;
  puVar3 = PTR_DAT_04cbbc60;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    System_Collections_Generic_List_ValueTuple_float__float__float____GetEnumerator_39d7960
              (&uStack_80,*(long *)(param_2 + 0x20),*(undefined8 *)PTR_DAT_04cbbc78);
    fVar2 = _UNK_00e1ff3c;
    fVar1 = _UNK_00e1fdf4;
    fVar8 = 0.0;
    while (uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_float__float__float____MoveNext_35be028
                             (&uStack_80,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      fVar10 = param_1 - (float)uStack_70;
      if (0.0 <= fVar10) {
        fVar5 = (float)uStack_68;
        fVar9 = uStack_70._4_4_ * fVar1;
        fVar7 = (float)func_0x049b5320(fVar10 * fVar9);
        fVar9 = (float)func_0x049b5320(fVar10 * fVar9 * fVar2);
        fVar10 = (float)expf(fVar10 * -55.0);
        fVar8 = fVar8 + fVar10 * fVar5 * (fVar7 + fVar9 * 0.5);
      }
    }
    System_Collections_Generic_List_Enumerator_ValueTuple_float__float__float____Dispose_35be024
              (&uStack_80,*(undefined8 *)puVar3);
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

