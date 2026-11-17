/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Join
void Dino_BusSand_App_Meta_WeeklyCupModel__Join (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, int32_t playerSeed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Join
   void Dino_BusSand_App_Meta_WeeklyCupModel__Join (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this,
   int64_t nowMs, int32_t playerSeed, const MethodInfo* method); */

void Dino_BusSand_App_Meta_WeeklyCupModel__Join_2231044
               (long param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar6 + 0x18) != '\0') {
    return;
  }
  lVar5 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
  *(undefined4 *)(lVar6 + 0x1c) = 0;
  *(undefined4 *)(lVar6 + 0x20) = param_3;
  *(undefined1 *)(lVar6 + 0x30) = 0;
  *(undefined4 *)(lVar6 + 0x34) = 0;
  uVar3 = param_2 / 86400000;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar3 = (lVar5 >> 0x19) - (lVar5 >> 0x3f);
  }
  uVar1 = (long)(uVar3 + 3) % 7;
  uVar2 = uVar1 + 7;
  if (uVar1 < 0xfffffffffffffff9) {
    uVar2 = uVar1;
  }
  uVar1 = (uVar3 - uVar2) * 86400000;
  lVar5 = SUB168(SEXT816((long)((uVar3 - uVar2) * -86400000 + 86399999)) *
                 SEXT816(-0x636ba875fd33dc87),8);
  *(ulong *)(lVar6 + 0x10) = uVar1;
  *(undefined1 *)(lVar6 + 0x18) = 1;
  uVar3 = uVar1 / 86400000;
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar3 = (lVar5 >> 0x19) - (lVar5 >> 0x3f);
  }
  uVar4 = Dino_BusSand_App_Meta_WeeklyCupModel__BuildBots_2231154((long)(uVar3 + 3) / 7,param_3);
  puVar7 = (undefined8 *)(lVar6 + 0x28);
  *puVar7 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

