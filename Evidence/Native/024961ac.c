/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Tick
void Dino_BusSand_View_EndSuctionCue__Tick (Dino_BusSand_View_EndSuctionCue_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Tick
   void Dino_BusSand_View_EndSuctionCue__Tick (Dino_BusSand_View_EndSuctionCue_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_EndSuctionCue__Tick_23961ac(float param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  if ((bRam0000000004f9c8dd & 1) == 0) {
                    /* try { // try from 024961cc to 025961d3 has its CatchHandler @ 024969f4 */
                    /* try { // try from 024961d4 to 02596207 has its CatchHandler @ 024960c4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8dd = 1;
  }
  if (*(float *)(param_2 + 0x40) < 0.0) {
                    /* try { // try from 02496228 to 0259622f has its CatchHandler @ 024969e0 */
    return;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02496208 to 0259620f has its CatchHandler @ 02496a5c */
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* try { // try from 02496234 to 0259623b has its CatchHandler @ 024969d8 */
  param_1 = *(float *)(param_2 + 0x40) + param_1;
  bVar2 = param_1 < _UNK_00e2042c;
                    /* try { // try from 02496240 to 02596247 has its CatchHandler @ 024969d4 */
  *(float *)(param_2 + 0x40) = param_1;
  puVar1 = PTR_DAT_04ca9ae8;
  if (bVar2) {
                    /* try { // try from 0249624c to 02596253 has its CatchHandler @ 024969d0 */
    fVar7 = param_1 / _UNK_00e207cc;
                    /* try { // try from 02496258 to 0259625f has its CatchHandler @ 024969cc */
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
                    /* try { // try from 02496264 to 0259626b has its CatchHandler @ 024969c8 */
    fVar9 = 1.0;
    if (0.0 <= fVar7) {
      fVar9 = 1.0 - fVar8;
    }
                    /* try { // try from 02496270 to 02596277 has its CatchHandler @ 024969c4 */
    fVar8 = 1.0 - fVar9 * fVar9 * fVar9;
                    /* try { // try from 0249627c to 02596283 has its CatchHandler @ 024969c0 */
    if (_UNK_00e207cc <= param_1) {
                    /* try { // try from 024962f4 to 0259630f has its CatchHandler @ 024969ec */
      fVar9 = (param_1 + _UNK_00e20864) / _UNK_00e20094;
      fVar7 = 1.0;
      if (fVar9 <= 1.0) {
        fVar7 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar7;
      }
      fVar7 = fVar10 * fVar10 * 3.0 - fVar10 * fVar10 * (fVar10 + fVar10);
      fVar7 = 1.0 - (fVar7 + (1.0 - fVar7) * 0.0);
    }
    else {
                    /* try { // try from 02496288 to 0259628f has its CatchHandler @ 024969bc */
      param_1 = param_1 / _UNK_00e20174;
                    /* try { // try from 02496294 to 0259629b has its CatchHandler @ 024969b8 */
      fVar7 = 1.0;
      if (param_1 <= 1.0) {
        fVar7 = param_1;
      }
      fVar9 = 0.0;
                    /* try { // try from 024962a0 to 025962a7 has its CatchHandler @ 024969b4 */
      if (0.0 <= param_1) {
        fVar9 = fVar7;
      }
                    /* try { // try from 024962ac to 025962b3 has its CatchHandler @ 024969b0 */
                    /* try { // try from 024962b8 to 025962bf has its CatchHandler @ 024969ac */
      fVar7 = fVar9 * fVar9 * 3.0 - fVar9 * fVar9 * (fVar9 + fVar9);
      fVar7 = fVar7 + (1.0 - fVar7) * 0.0;
    }
                    /* try { // try from 02496348 to 02596353 has its CatchHandler @ 02496a98 */
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
                    /* try { // try from 02496368 to 0259636f has its CatchHandler @ 02496a7c */
    fVar8 = *(float *)(param_2 + 0x38) +
            fVar10 * (*(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x38));
                    /* try { // try from 02496370 to 0259637b has its CatchHandler @ 02496a84 */
    if ((bRam0000000004f9c8df & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbc148);
      bRam0000000004f9c8df = 1;
    }
    puVar1 = PTR_DAT_04cbc148;
    if (*(long *)(param_2 + 0x20) != 0) {
      uVar5 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_2 + 0x20),0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
        lVar4 = *(long *)puVar1;
      }
      Dino_BusSand_View_EndSuctionCue__Put_2396440
                (fVar8 - *(float *)(*(long *)(lVar4 + 0xb8) + 0xc),
                 *(float *)(*(long *)(lVar4 + 0xb8) + 4) * _UNK_00e20660,_UNK_00e20178,param_2,uVar5
                );
      if (*(long *)(param_2 + 0x18) != 0) {
        uVar5 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_2 + 0x18),0);
        Dino_BusSand_View_EndSuctionCue__Put_2396440
                  (fVar8,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0x3fc00000,param_2,
                   uVar5);
        if (*(long *)(param_2 + 0x30) != 0) {
          lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
          UnityEngine_Material__SetColor_437bcac
                    (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                     *(undefined4 *)(lVar4 + 0x20),*(float *)(lVar4 + 8) * fVar7,
                     *(long *)(param_2 + 0x30),*(undefined4 *)(lVar4 + 0x38),0);
          lVar4 = *(long *)(param_2 + 0x28);
          if (lVar4 != 0) {
            fVar8 = (*(float **)(*(long *)puVar1 + 0xb8))[0xe];
            fStack_34 = **(float **)(*(long *)puVar1 + 0xb8) * fVar7;
            uStack_40 = 0x3f800000;
            uStack_3c = 0x3f800000;
            uStack_38 = 0x3f800000;
            if ((bRam0000000004fa6d89 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf6620,fVar8,0);
              FUN_02132f7c(PTR_DAT_04cab588);
              bRam0000000004fa6d89 = 1;
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar6 = *(long *)(lVar4 + 0x10);
            if (lVar6 != 0) {
              if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (pcRam0000000004fa6f70 == (code *)0x0) {
                pcRam0000000004fa6f70 = (code *)FUN_02132f40(&UNK_00e48b6d);
              }
              (*pcRam0000000004fa6f70)(lVar6,fVar8,&uStack_40);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c8de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8de = 1;
  }
  lVar4 = *(long *)puVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x40) = 0xbf800000;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_0249643c;
    UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_2 + 0x18),0,0);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 != 0) {
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar6,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
  }
LAB_0249643c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

