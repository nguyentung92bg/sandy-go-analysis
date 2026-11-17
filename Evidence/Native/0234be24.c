/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$IntArr
System_Int32_array* Dino_BusSand_App_Meta_StreakTowerUtil__IntArr (Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0216dff4) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$IntArr
   System_Int32_array* Dino_BusSand_App_Meta_StreakTowerUtil__IntArr (Il2CppObject* o, const
   MethodInfo* method); */

long * Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((bRam0000000004f9bfd6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    bRam0000000004f9bfd6 = 1;
  }
  puVar2 = PTR_DAT_04caec70;
  lVar4 = Dino_BusSand_App_MiniJson__Arr_2156264(param_1,0);
  if (lVar4 == 0) {
    lVar4 = *(long *)puVar2;
    FUN_02193814();
    il2cpp_array_element_size(lVar4);
    if ((*(ushort *)(lVar4 + 0x135) >> 5 & 1) == 0) {
      plVar5 = (long *)FUN_021a5ef0(0x20);
      *plVar5 = lVar4;
      plVar5[1] = 0;
      FUN_02220bc0(1,PTR_DAT_04d16040);
      plVar5[2] = 0;
      func_0x049b52e0(plVar5 + 2,0,0x10);
    }
    else if ((*(int *)(*(long *)(lVar4 + 0x40) + 0x28) < 0) &&
            ((*(ulong *)(*(long *)(lVar4 + 0x40) + 8) & 3) == 1)) {
      plVar5 = (long *)FUN_021ac1cc(0x20,lVar4);
    }
    else {
      if (*(long *)(lVar4 + 8) == 0) {
        plVar5 = (long *)FUN_021a5cdc(0x20);
        *plVar5 = lVar4;
      }
      else {
        plVar5 = (long *)FUN_021a0d6c(0x20,lVar4);
      }
      FUN_02220bc0(1,PTR_DAT_04d16040);
    }
    plVar5[3] = 0;
    if (DAT_04faeb60 < '\0') {
      FUN_0217d5b8(plVar5,lVar4);
    }
    return plVar5;
  }
  plVar5 = (long *)FUN_02133068(*(undefined8 *)puVar2,*(undefined4 *)(lVar4 + 0x18));
  puVar2 = PTR_DAT_04cb15c0;
  if (0 < *(int *)(lVar4 + 0x18)) {
    uVar7 = 0;
    do {
      uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar4,uVar7 & 0xffffffff,*(undefined8 *)puVar2);
      uVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar6,0,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(plVar5 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(undefined4 *)((long)plVar5 + lVar1 + 0x20) = uVar3;
    } while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18));
  }
  return plVar5;
}

