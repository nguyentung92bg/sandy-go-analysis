/* IL2CPP: Dino.BusSand.Core.SandPalette$$Resolve
UnityEngine_Color32_o Dino_BusSand_Core_SandPalette__Resolve (uint8_t id, int8_t shade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SandPalette$$Resolve
   UnityEngine_Color32_o Dino_BusSand_Core_SandPalette__Resolve (uint8_t id, int8_t shade, const
   MethodInfo* method); */

uint Dino_BusSand_Core_SandPalette__Resolve_2419918(uint param_1,char param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  if ((bRam0000000004f9cb85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9cb85 = 1;
  }
  puVar1 = PTR_DAT_04cbbfb8;
  if ((param_1 & 0xff) == 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_1);
    uVar7 = uVar5 >> 8 & 0xffffff;
    uVar3 = (uint)uVar7;
    uVar8 = uVar5 >> 0x10 & 0xffff;
    uVar4 = (uint)uVar8;
    uVar2 = (uint)uVar5;
    if (param_2 == '\0') {
      uVar6 = uVar2 & 0xff000000;
    }
    else {
      fVar9 = (float)(int)param_2 * _UNK_00e20840 + 1.0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_Core_SandPalette__Scale_2419a34(fVar9,uVar5 & 0xffffffff);
                    /* try { // try from 025199c8 to 02619ae3 has its CatchHandler @ 025199c8
                       catch() { ... } // from try @ 025199c8 with catch @ 025199c8
                       catch() { ... } // from try @ 02519bf4 with catch @ 025199c8
                       catch() { ... } // from try @ 02519c34 with catch @ 025199c8
                       catch() { ... } // from try @ 02519c90 with catch @ 025199c8
                       catch() { ... } // from try @ 02519cbc with catch @ 025199c8 */
      uVar3 = Dino_BusSand_Core_SandPalette__Scale_2419a34(fVar9,uVar7);
      uVar4 = Dino_BusSand_Core_SandPalette__Scale_2419a34(fVar9,uVar8);
      uVar6 = 0xff000000;
    }
  }
  return uVar6 | (uVar4 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar2 & 0xff;
}

