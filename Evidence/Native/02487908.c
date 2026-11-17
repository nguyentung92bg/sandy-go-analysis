/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__22
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__22 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__22
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__22
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__22_2387908
                (float param_1,long param_2)

{
  double dVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc80);
    FUN_02132f7c(PTR_DAT_04cbbc88);
    FUN_02132f7c(PTR_DAT_04cbbc90);
    FUN_02132f7c(PTR_DAT_04cbbc98);
    bRam0000000004f9c87c = 1;
  }
  puVar4 = PTR_DAT_04cbbc88;
  puVar3 = PTR_DAT_04cbbc80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    System_Collections_Generic_List_ValueTuple_float__float____GetEnumerator_39c4b40
              (&uStack_78,*(long *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_04cbbc98);
    fVar2 = _UNK_00e207ec;
    fVar8 = 0.0;
    while( true ) {
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_float__float____MoveNext_35bcb38
                          (&uStack_78,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_ValueTuple_float__float____Dispose_35bcb34
                    (&uStack_78,*(undefined8 *)puVar3);
          return fVar8;
        }
        fVar9 = param_1 - (float)uStack_68;
      } while ((fVar9 < 0.0) || (fVar2 < fVar9));
      plVar7 = *(long **)(param_2 + 0x18);
      if (plVar7 == (long *)0x0) break;
      fVar5 = uStack_68._4_4_;
      dVar1 = (double)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      fVar9 = (float)expf(fVar9 * -900.0);
      fVar8 = fVar8 + fVar9 * fVar5 * ((float)dVar1 + (float)dVar1 + -1.0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

