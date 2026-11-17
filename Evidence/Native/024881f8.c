/* IL2CPP: Dino.BusSand.GameAudio.<SynthClips>d__152$$MoveNext
bool Dino_BusSand_GameAudio__SynthClips_d__152__MoveNext (Dino_BusSand_GameAudio__SynthClips_d__152_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio.<SynthClips>d__152$$MoveNext
   bool Dino_BusSand_GameAudio__SynthClips_d__152__MoveNext
   (Dino_BusSand_GameAudio__SynthClips_d__152_o* __this, const MethodInfo* method); */

long * Dino_BusSand_GameAudio__SynthClips_d__152__MoveNext_23881f8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9c87f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c87f = 1;
  }
  plVar1 = (long *)0x0;
  if (0x21 < *(uint *)(param_1 + 0x10)) {
    return (long *)0x0;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar3 = 0xffffffff;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x128) == 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          Dino_BusSand_GameAudio__BuildSynth_237eeb4(lVar6);
        }
      }
      else {
        Dino_BusSand_GameAudio__FinishSynth_237e160(lVar6);
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x100);
      thunk_FUN_02134474();
      uVar3 = 1;
      plVar1 = (long *)0x1;
      break;
    }
    goto code_r0x024887ac;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x108);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x48);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 3;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x70);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x78);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 6;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x58);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 7;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x60);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 8;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x68);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 9;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x80);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 10;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x88);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0xb;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x90);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0xc;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x98);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0xd;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xa0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0xe;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xa8);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0xf;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xb0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x10;
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xb8);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x11;
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xc0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x12;
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 200);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x13;
    break;
  case 0x13:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xd0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x14;
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xd8);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x15;
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xe0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x16;
    break;
  case 0x16:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xe8);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x17;
    break;
  case 0x17:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xf0);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x18;
    break;
  case 0x18:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0xf8);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x19;
    break;
  case 0x19:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar6 + 0x110);
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x30));
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    goto code_r0x024886e4;
  case 0x1a:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = *(int *)(param_1 + 0x38) + 1;
    *(uint *)(param_1 + 0x38) = uVar4;
code_r0x024886e4:
    plVar1 = (long *)(param_1 + 0x30);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
code_r0x024887ac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(plVar1);
    }
    if ((int)uVar4 < (int)*(uint *)(lVar5 + 0x18)) {
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_02134474();
      plVar1 = (long *)0x1;
      uVar3 = 0x1a;
    }
    else {
      *plVar1 = 0;
      plVar1 = (long *)thunk_FUN_02134474(plVar1,0);
      if (lVar6 == 0) goto code_r0x024887ac;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x158);
      thunk_FUN_02134474();
      plVar1 = (long *)0x1;
      uVar3 = 0x1b;
    }
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x160);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x1c;
    break;
  case 0x1c:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x168);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x1d;
    break;
  case 0x1d:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x170);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x1e;
    break;
  case 0x1e:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x178);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x1f;
    break;
  case 0x1f:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x180);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x20;
    break;
  case 0x20:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x024887ac;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x188);
    thunk_FUN_02134474();
    plVar1 = (long *)0x1;
    uVar3 = 0x21;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return plVar1;
}

