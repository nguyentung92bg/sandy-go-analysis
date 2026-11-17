/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Ascii
void Dino_BusSand_App_Meta_Journey_JourneyBytes__Ascii (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, System_String_o* s, int32_t start, int32_t max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Ascii
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__Ascii
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, System_String_o* s, int32_t start, int32_t
   max, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__Ascii_229585c
               (long param_1,long param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9c1fe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1fe = 1;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar3 = System_Math__Min_4831118(param_4,iVar3 - param_3,0);
    if ((0 < iVar3) &&
       (uVar4 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac(param_1,iVar3),
       (uVar4 & 1) != 0)) {
      do {
        sVar2 = System_String__get_Chars_46ccb24(param_2,param_3,0);
        uVar1 = *(uint *)(param_1 + 0x18);
        lVar5 = *(long *)(param_1 + 0x10);
        if (0x5e < (ushort)(sVar2 - 0x20U)) {
          sVar2 = 0x3f;
        }
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar3 = iVar3 + -1;
        param_3 = param_3 + 1;
        *(char *)(lVar5 + (int)uVar1 + 0x20) = (char)sVar2;
      } while (iVar3 != 0);
    }
  }
  return;
}

