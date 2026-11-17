/* IL2CPP: Dino.BusSand.GameAudio.<PaintChord>d__117$$MoveNext
bool Dino_BusSand_GameAudio__PaintChord_d__117__MoveNext (Dino_BusSand_GameAudio__PaintChord_d__117_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<PaintChord>d__117$$MoveNext
   bool Dino_BusSand_GameAudio__PaintChord_d__117__MoveNext
   (Dino_BusSand_GameAudio__PaintChord_d__117_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_GameAudio__PaintChord_d__117__MoveNext_2388014(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((bRam0000000004f9c87e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cbb400);
    bRam0000000004f9c87e = 1;
  }
  puVar2 = PTR_DAT_04cbb400;
  puVar1 = PTR_DAT_04cad568;
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar4 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_02488124;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    while( true ) {
      *(int *)(param_1 + 0x2c) = iVar4;
      if (*(int *)(param_1 + 0x24) < iVar4) break;
      lVar3 = *(long *)puVar1;
      uVar5 = *(undefined8 *)puVar2;
      uVar7 = 0x3f800000;
      if (iVar4 != *(int *)(param_1 + 0x24)) {
        uVar7 = _UNK_00e203f4;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar6 = exp2f(*(float *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x2c) * 4 + 0x20) / 12.0);
      Dino_BusSand_GameAudio__Play_2382750(uVar7,uVar6,*(float *)(param_1 + 0x28) * 0.5,uVar5);
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 < *(int *)(param_1 + 0x24)) {
        uVar7 = *(undefined4 *)(&UNK_00e6a7c8 + (ulong)(iVar4 == *(int *)(param_1 + 0x24) + -1) * 4)
        ;
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar7,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
LAB_02488124:
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}

