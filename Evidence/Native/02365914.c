/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$BoosterByShop
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_Monetization__BoosterByShop (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02365c04) */
/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$BoosterByShop
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_Meta_Monetization__BoosterByShop (int32_t shopId, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Monetization__BoosterByShop_2265914(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c056 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
                    /* try { // try from 02365950 to 0246595f has its CatchHandler @ 02365960 */
    FUN_02132f7c(PTR_DAT_04ca9b30);
                    /* catch() { ... } // from try @ 02365868 with catch @ 02365960
                       catch() { ... } // from try @ 02365950 with catch @ 02365960 */
    FUN_02132f7c(PTR_DAT_04cad288);
                    /* try { // try from 02365964 to 02465967 has its CatchHandler @ 02365970 */
                    /* try { // try from 02365968 to 02465973 has its CatchHandler @ 023657e8 */
    FUN_02132f7c(PTR_DAT_04cad290);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02365964 with catch @ 02365970
                        */
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cb2650);
    bRam0000000004f9c056 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)Dino_BusSand_App_Meta_EconomySettings__Rows_220588c(0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02365a14;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cad288,0);
LAB_02365a14:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = PTR_DAT_04cb2650;
  puVar3 = PTR_DAT_04cb2130;
  puVar2 = PTR_DAT_04cad290;
  puVar1 = PTR_DAT_04ca9c08;
  do {
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02365aa0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar1,0);
LAB_02365aa0:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        uVar8 = 0;
        goto LAB_02365b70;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02365b04;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar2,0);
LAB_02365b04:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*(undefined8 *)puVar4,0);
      iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
    } while (iVar5 != param_1);
    uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*(undefined8 *)puVar3,0);
    iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
  } while (iVar5 == 0);
LAB_02365b70:
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02365bd0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_02365bd0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return uVar8;
}

