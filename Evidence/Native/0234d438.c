/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$CurrentPeriod
bool Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod (System_String_o* activityType, int32_t groupId, int64_t nowMs, int32_t* activityId, int64_t* startMs, int64_t* endMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234da5c) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$CurrentPeriod
   bool Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod (System_String_o* activityType, int32_t
   groupId, int64_t nowMs, int32_t* activityId, int64_t* startMs, int64_t* endMs, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod_224d438
               (undefined8 param_1,int param_2,long param_3,int *param_4,long *param_5,long *param_6
               )

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  bool bVar16;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bfcc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2a48);
    FUN_02132f7c(PTR_DAT_04cb2d18);
    FUN_02132f7c(PTR_DAT_04cb2a50);
    FUN_02132f7c(PTR_DAT_04cb2a58);
    FUN_02132f7c(PTR_DAT_04cb2a60);
    FUN_02132f7c(PTR_DAT_04cb2a68);
    FUN_02132f7c(PTR_DAT_04cb2a70);
    FUN_02132f7c(PTR_DAT_04cb2a78);
    FUN_02132f7c(PTR_DAT_04cb2a80);
    FUN_02132f7c(PTR_DAT_04cb2a88);
    FUN_02132f7c(PTR_DAT_04cb2a98);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bfcc = 1;
  }
  lVar4 = *(long *)puVar1;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  *param_4 = 0;
  puVar1 = PTR_DAT_04cb2a60;
  lStack_78 = 0;
  iVar3 = *(int *)(lVar4 + 0xe4);
  *param_5 = 0;
  *param_6 = 0;
  if (iVar3 == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar1,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar5;
  uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0234d608;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cad288,0);
LAB_0234d608:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar2 = PTR_DAT_04cb15c0;
  puVar1 = PTR_DAT_04ca9c30;
  do {
    plStack_68 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9c08) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0234d68c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9c08,0);
LAB_0234d68c:
    uVar14 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar5 = plStack_68;
    if ((uVar14 & 1) == 0) {
      bVar16 = false;
LAB_0234d9c4:
      plVar5 = plStack_68;
      if (plStack_68 == (long *)0x0) {
        return bVar16;
      }
      lVar4 = *plStack_68;
      uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar14 == 0) goto LAB_0234da04;
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *plStack_68;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cad290) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0234d6f8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04cad290,0);
LAB_0234d6f8:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a70,0);
    uVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar1,0);
    uVar14 = System_String__op_Inequality_46d110c(uVar8,param_1,0);
    plVar5 = plStack_68;
    if ((uVar14 & 1) == 0) {
      uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a98,0);
      iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
      plVar5 = plStack_68;
      if (iVar3 == param_2) {
        uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a58,0);
        lVar4 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
        uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a50,0);
        lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
        uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a78,0);
        lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
        uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb2a88,0);
        lVar11 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
        plVar5 = plStack_68;
        if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) && (lVar10 != 0)) &&
           ((lVar11 != 0 && (0 < *(int *)(lVar10 + 0x18))))) {
          iVar3 = 0;
          do {
            plVar5 = plStack_68;
            if (*(int *)(lVar11 + 0x18) <= iVar3) break;
            if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) <= iVar3)) {
              uVar8 = *(undefined8 *)PTR_DAT_04cb2d18;
            }
            else {
              uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                                (lVar9,iVar3,*(undefined8 *)puVar2);
              uVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar1,0);
            }
            uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar10,iVar3,*(undefined8 *)puVar2);
            uVar12 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar12,*(undefined8 *)puVar1,0);
            uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar11,iVar3,*(undefined8 *)puVar2);
            uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar13,*(undefined8 *)puVar1,0);
            uVar14 = Dino_BusSand_App_Meta_StreakTowerUtil__Window_22516d4
                               (uVar8,uVar12,uVar13,param_3,&lStack_70,&lStack_78);
            if (((uVar14 & 1) != 0) && (iVar3 < *(int *)(lVar4 + 0x18))) {
              uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                                (lVar4,iVar3,*(undefined8 *)puVar2);
              iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
              uVar8 = *(undefined8 *)PTR_DAT_04cb2a68;
              *param_4 = iVar3;
              uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,uVar8,0);
              uVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar1,0);
              uVar14 = System_String__op_Equality_46d1108(uVar8,*(undefined8 *)PTR_DAT_04cb2a80,0);
              if ((uVar14 & 1) == 0) {
                *param_5 = lStack_70;
                lVar4 = lStack_78;
              }
              else {
                uVar8 = *(undefined8 *)PTR_DAT_04cb2a48;
                *param_5 = param_3;
                uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,uVar8,0);
                lVar4 = Dino_BusSand_App_MiniJson__Long_2156378(uVar7,0,0);
                lVar4 = param_3 + lVar4 * 60000;
              }
              iVar3 = *param_4;
              *param_6 = lVar4;
              bVar16 = 0 < iVar3;
              goto LAB_0234d9c4;
            }
            iVar3 = iVar3 + 1;
            plVar5 = plStack_68;
          } while (iVar3 < *(int *)(lVar10 + 0x18));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0234da20;
    }
  }
LAB_0234da04:
  puVar6 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04ca9b30,0);
LAB_0234da20:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return bVar16;
}

