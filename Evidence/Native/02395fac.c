/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Value
int32_t Dino_BusSand_App_Meta_Journey_Base64Url__Value (uint16_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Value
   int32_t Dino_BusSand_App_Meta_Journey_Base64Url__Value (uint16_t c, const MethodInfo* method); */

int Dino_BusSand_App_Meta_Journey_Base64Url__Value_2295fac(ushort param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort auStack_14 [2];
  
  uVar1 = (uint)param_1;
  if (uVar1 - 0x5b < 0xffffffe6) {
    if (uVar1 - 0x7b < 0xffffffe6) {
      if (uVar1 - 0x3a < 0xfffffff6) {
        if (uVar1 < 0x2f) {
          iVar2 = 0x3e;
          if ((uVar1 != 0x2b) && (uVar1 != 0x2d)) {
LAB_02396038:
            auStack_14[0] = param_1;
            FUN_01e78ee0(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x88));
            uVar3 = System_Char__ToString_47ac098(auStack_14,0);
            uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb54f0);
            uVar5 = thunk_FUN_021985a8(PTR_DAT_04caac00);
            uVar3 = System_String__Concat_46d2b84(uVar4,uVar3,uVar5,0);
            thunk_FUN_021985a8(PTR_DAT_04cb3f78);
            uVar4 = thunk_FUN_0216e89c();
            System_FormatException___ctor_4818b54(uVar4,uVar3,0);
            uVar3 = thunk_FUN_021985a8(PTR_DAT_04cb54f8);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar4,uVar3);
          }
        }
        else {
          if ((uVar1 != 0x2f) && (uVar1 != 0x5f)) goto LAB_02396038;
          iVar2 = 0x3f;
        }
      }
      else {
        iVar2 = uVar1 + 4;
      }
    }
    else {
      iVar2 = uVar1 - 0x47;
    }
  }
  else {
    iVar2 = uVar1 - 0x41;
  }
  return iVar2;
}

