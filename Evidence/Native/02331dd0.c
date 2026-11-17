/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$I
int32_t Dino_BusSand_App_Meta_GiftPackConfig__I (System_Collections_Generic_Dictionary_string__object__o* r, System_String_o* k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$I
   int32_t Dino_BusSand_App_Meta_GiftPackConfig__I
   (System_Collections_Generic_Dictionary_string__object__o* r, System_String_o* k, const
   MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackConfig__I_2231dd0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  double *pdVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uStack_14;
  
  plVar4 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(param_1,param_2,0);
  uStack_14 = 0;
  uVar6 = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar2 = (double *)thunk_FUN_0216e9e4(plVar4,0,0);
      uVar6 = 0x80000000;
      if (*pdVar2 != INFINITY) {
        uVar6 = (int)*pdVar2;
      }
    }
    else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar4,0,0);
      uVar6 = (uint)*pbVar3;
    }
    else if ((lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
            (uVar1 = System_Int32__TryParse_482de64(plVar4,&uStack_14,0), uVar6 = uStack_14,
            (uVar1 & 1) == 0)) {
      uVar6 = 0;
    }
  }
  return uVar6;
}

