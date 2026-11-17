/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__20
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__20 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__20
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__20
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__20_23875c0
                (float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c87b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc60);
    FUN_02132f7c(PTR_DAT_04cbbc68);
    FUN_02132f7c(PTR_DAT_04cbbc70);
    FUN_02132f7c(PTR_DAT_04cbbc78);
    bRam0000000004f9c87b = 1;
  }
  fVar11 = 0.0;
  fVar10 = 0.0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1 < _UNK_00e201f4) {
    fVar10 = (param_1 * 260.0 + param_1 * -450.0 * param_1) * _UNK_00e1fdf4;
    fVar6 = (float)func_0x049b5320(fVar10);
    fVar7 = (float)func_0x049b5320(fVar10 * _UNK_00e1fea4);
    fVar10 = (float)expf(param_1 * -30.0);
    fVar10 = fVar10 * (fVar6 + fVar7 * _UNK_00e20094);
  }
  if (param_1 < _UNK_00e20294) {
    plVar4 = *(long **)(param_2 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_024877d0;
    dVar9 = (double)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    fVar11 = ((float)dVar9 + (float)dVar9 + -1.0) * _UNK_00e200f8;
  }
  puVar2 = PTR_DAT_04cbbc68;
  puVar1 = PTR_DAT_04cbbc60;
  if (*(long *)(param_2 + 0x30) != 0) {
    fVar10 = fVar10 + fVar11;
    System_Collections_Generic_List_ValueTuple_float__float__float____GetEnumerator_39d7960
              (&uStack_80,*(long *)(param_2 + 0x30),*(undefined8 *)PTR_DAT_04cbbc78);
    fVar6 = _UNK_00e20488;
    fVar11 = _UNK_00e1fdf4;
    while (uVar5 = System_Collections_Generic_List_Enumerator_ValueTuple_float__float__float____MoveNext_35be028
                             (&uStack_80,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      fVar7 = param_1 - (float)uStack_70;
      if ((0.0 <= fVar7) && (fVar7 <= fVar6)) {
        fVar3 = (float)uStack_68;
        fVar8 = (float)func_0x049b5320(fVar7 * uStack_70._4_4_ * fVar11);
        fVar7 = (float)expf(fVar7 * -400.0);
        fVar10 = fVar10 + fVar7 * fVar3 * fVar8;
      }
    }
    System_Collections_Generic_List_Enumerator_ValueTuple_float__float__float____Dispose_35be024
              (&uStack_80,*(undefined8 *)puVar1);
    return fVar10;
  }
LAB_024877d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

