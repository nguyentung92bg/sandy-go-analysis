/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$VarU
void Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, uint64_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$VarU
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, uint64_t v, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  if (param_2 < 0x80) {
    uVar2 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac(param_1,1);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
    iVar3 = 1;
    uVar2 = param_2;
    do {
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar2 >> 7;
      iVar3 = iVar3 + 1;
    } while (uVar4 != 0);
    uVar2 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac(param_1,iVar3);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (0x7f < param_2) {
      do {
        uVar1 = *(uint *)(param_1 + 0x18);
        lVar5 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        if (lVar5 == 0) goto LAB_02395730;
        if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_02395734;
        uVar6 = param_2 >> 7;
        uVar2 = param_2 >> 0xe;
        *(byte *)(lVar5 + (int)uVar1 + 0x20) = (byte)param_2 | 0x80;
        param_2 = uVar6;
      } while (uVar2 != 0);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  if (lVar5 != 0) {
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(char *)(lVar5 + (int)uVar1 + 0x20) = (char)uVar6;
      return;
    }
LAB_02395734:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02395730:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

