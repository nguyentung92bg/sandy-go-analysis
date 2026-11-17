/* IL2CPP: Dino.BusSand.AudioHub$$Acquire
Dino_BusSand_AudioHub_Voice_o* Dino_BusSand_AudioHub__Acquire (Dino_BusSand_AudioHub_o* __this, int32_t prio, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Acquire
   Dino_BusSand_AudioHub_Voice_o* Dino_BusSand_AudioHub__Acquire (Dino_BusSand_AudioHub_o* __this,
   int32_t prio, const MethodInfo* method); */

long Dino_BusSand_AudioHub__Acquire_2375f30(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c7f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f1 = 1;
  }
  puVar3 = PTR_DAT_04cbb208;
  puVar2 = PTR_DAT_04cbb200;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02475fa8 to 0257617b has its CatchHandler @ 02475fa8
                       catch() { ... } // from try @ 02475fa8 with catch @ 02475fa8
                       catch() { ... } // from try @ 0247635c with catch @ 02475fa8
                       catch() { ... } // from try @ 02476520 with catch @ 02475fa8
                       catch() { ... } // from try @ 02476530 with catch @ 02475fa8
                       catch() { ... } // from try @ 024765d4 with catch @ 02475fa8
                       catch() { ... } // from try @ 02476600 with catch @ 02475fa8
                       catch() { ... } // from try @ 02476674 with catch @ 02475fa8
                       catch() { ... } // from try @ 024766b0 with catch @ 02475fa8
                       catch() { ... } // from try @ 024766d4 with catch @ 02475fa8 */
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    puStack_90 = &uStack_80;
    uStack_98 = 0;
    fVar8 = 3.4028235e+38;
    lVar7 = 0;
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar3);
      lVar4 = lStack_70;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar2);
        return lVar7;
      }
      if (lStack_70 == 0) break;
      uVar5 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lStack_70);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar2);
        return lVar4;
      }
      if (*(int *)(lVar4 + 0x28) <= param_2) {
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = UnityEngine_AudioSource__get_clip_434866c(*(long *)(lVar4 + 0x10),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        fVar10 = 1.0;
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar9 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar6,0);
          fVar10 = 1.0;
          if (0.0 < fVar9) {
            if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            fVar10 = (float)UnityEngine_AudioSource__get_time_43484e4(*(long *)(lVar4 + 0x10),0);
            fVar9 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar6,0);
            fVar10 = fVar10 / fVar9;
          }
        }
        fVar10 = (float)*(int *)(lVar4 + 0x28) * 10.0 - fVar10;
        if (fVar10 < fVar8) {
          fVar8 = fVar10;
          lVar7 = lVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

