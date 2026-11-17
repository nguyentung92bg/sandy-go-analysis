/* IL2CPP: Dino.BusSand.App.UI.GuideRequest$$ApplyDecoded
void Dino_BusSand_App_UI_GuideRequest__ApplyDecoded (Dino_BusSand_App_UI_GuideRequest_o* q, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuideRequest$$ApplyDecoded
   void Dino_BusSand_App_UI_GuideRequest__ApplyDecoded (Dino_BusSand_App_UI_GuideRequest_o* q,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuideRequest__ApplyDecoded_22cee94(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c398 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6bf0);
    FUN_02132f7c(PTR_DAT_04cb6ba0);
    FUN_02132f7c(PTR_DAT_04cb6bf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c398 = 1;
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x50) = _UNK_00e6a440;
    if (param_2 == 2) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)PTR_DAT_04cb6bf8;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x38));
      uVar2 = _UNK_00e698c0;
      *(undefined2 *)(param_1 + 0x48) = 0x101;
      uVar3 = _UNK_00e20994;
      *(undefined4 *)(param_1 + 0x54) = 500;
      *(undefined8 *)(param_1 + 0x5c) = uVar2;
    }
    else {
      if (param_2 == 1) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)PTR_DAT_04cb6bf0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x38));
        uVar2 = _UNK_00e6a908;
        uVar4 = NEON_fmov(0xc1a00000,4);
        *(undefined2 *)(param_1 + 0x40) = 0x101;
        *(undefined1 *)(param_1 + 0x49) = 1;
        uVar3 = 0x3f800000;
      }
      else {
        iVar1 = 0;
        if (0xfffffffb < param_2 - 7U) {
          iVar1 = param_2 + 9999;
        }
        *(int *)(param_1 + 0x44) = iVar1;
        if (param_2 - 7U < 0xfffffffc) {
          uVar2 = *(undefined8 *)PTR_DAT_04ca9c30;
        }
        else {
          uVar2 = System_Int32__ToString_482d750((int *)(param_1 + 0x44),0);
          uVar2 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6ba0,uVar2,0);
        }
        *(undefined8 *)(param_1 + 0x38) = uVar2;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x38));
        uVar2 = _UNK_00e69f30;
        uVar4 = NEON_fmov(0xc1a00000,4);
        uVar3 = 0x3f000000;
        *(undefined2 *)(param_1 + 0x40) = 0x101;
      }
      *(undefined8 *)(param_1 + 0x5c) = uVar2;
      *(undefined8 *)(param_1 + 0x68) = uVar4;
      *(undefined4 *)(param_1 + 100) = 0x44160000;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

