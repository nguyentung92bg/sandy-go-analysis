/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ReserveHudSpace
void Dino_BusSand_App_Gameplay_GameplayController__ReserveHudSpace (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ReserveHudSpace
   void Dino_BusSand_App_Gameplay_GameplayController__ReserveHudSpace
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ReserveHudSpace_229d5e4(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04cb2870;
  if ((bRam0000000004f9c237 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c237 = 1;
  }
  iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
  iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
    lVar4 = *(long *)puVar1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  fVar7 = 1080.0 / ((float)iVar2 / (float)iVar3);
  if (0.5625 <= (float)iVar2 / (float)iVar3) {
    fVar7 = 1920.0;
  }
  fVar5 = (float)_UNK_00e69b48 / fVar7;
  fVar7 = (float)((ulong)_UNK_00e69b48 >> 0x20) / fVar7;
  uVar6 = CONCAT44(fVar7,fVar5) ^
          (CONCAT44(fVar7,fVar5) ^ _UNK_00e6a1d8) &
          CONCAT44(-(uint)((float)(_UNK_00e6a1d8 >> 0x20) < fVar7),
                   -(uint)((float)_UNK_00e6a1d8 < fVar5));
  **(ulong **)(lVar4 + 0xb8) =
       uVar6 ^ (uVar6 ^ _UNK_00e69f20) &
               CONCAT44(-(uint)(fVar7 < (float)(_UNK_00e69f20 >> 0x20)),
                        -(uint)(fVar5 < (float)_UNK_00e69f20));
  return;
}

