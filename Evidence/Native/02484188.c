/* IL2CPP: Dino.BusSand.GameAudio$$BusComplete
void Dino_BusSand_GameAudio__BusComplete (Dino_BusSand_GameAudio_o* __this, float pan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$BusComplete
   void Dino_BusSand_GameAudio__BusComplete (Dino_BusSand_GameAudio_o* __this, float pan, const
   MethodInfo* method); */

void Dino_BusSand_GameAudio__BusComplete_2384188(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  
  puVar3 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c855 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbb4e8);
    FUN_02132f7c(PTR_DAT_04cbb5c0);
    bRam0000000004f9c855 = 1;
  }
  puVar4 = PTR_DAT_04cbb5c0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_GameAudio__Play_2382750(0x3f800000,0x3f800000,param_1,*(undefined8 *)puVar4);
  fVar6 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (_UNK_00e2032c < fVar6 - *(float *)(param_2 + 0x124)) {
    *(undefined4 *)(param_2 + 0x120) = 0;
  }
  uVar7 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_2 + 0x124) = uVar7;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cbb4e8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18) - 1;
    uVar1 = *(uint *)(param_2 + 0x120);
    if ((int)uVar2 <= (int)*(uint *)(param_2 + 0x120)) {
      uVar1 = uVar2;
    }
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      uVar7 = exp2f(*(float *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) / 12.0);
      Dino_BusSand_GameAudio__Play_2382750(0x3f800000,uVar7,param_1 * 0.5,*(undefined8 *)puVar3);
      *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

