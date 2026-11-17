/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartRace
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_YachtRacingCore__StartRace (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_String_o* playerName, System_Func_string__o* randomName, System_Collections_Generic_List_int__o* headIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartRace
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_YachtRacingCore__StartRace
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_String_o* playerName,
   System_Func_string__o* randomName, System_Collections_Generic_List_int__o* headIds, const
   MethodInfo* method); */

long * Dino_BusSand_App_Meta_YachtRacingCore__StartRace_2257dfc
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04cac018;
                    /* try { // try from 02357e00 to 02457e33 has its CatchHandler @ 02357d8c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357df8 with catch @ 02357e10
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357dcc with catch @ 02357e14
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357dd4 with catch @ 02357e18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357da8 with catch @ 02357e1c
                        */
  if ((bRam0000000004f9bff1 & 1) == 0) {
                    /* try { // try from 02357e34 to 02457e4b has its CatchHandler @ 02357f04 */
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
                    /* try { // try from 02357e4c to 02457ef3 has its CatchHandler @ 02357d8c */
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb07f8);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9bff1 = 1;
  }
  puVar4 = PTR_DAT_04cb07f8;
  uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_FirstStartRewardId_225529c(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  lVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar6,0);
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_02357ee8:
    bVar2 = true;
LAB_02357eec:
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) goto LAB_02357fc4;
                    /* try { // try from 02357ef4 to 02457f03 has its CatchHandler @ 02357f04 */
    bVar5 = *(char *)(lVar10 + 0x80) != '\0';
  }
  else {
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar7,*(undefined8 *)PTR_DAT_04cad280,0);
    lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
    if (lVar7 == 0) goto LAB_02357ee8;
    if (*(int *)(lVar7 + 0x18) != 0) {
      bVar2 = false;
      goto LAB_02357eec;
    }
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) goto LAB_02357fc4;
    bVar5 = false;
    bVar2 = false;
  }
  lVar11 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 02357e34 with catch @ 02357f04
                       catch() { ... } // from try @ 02357ef4 with catch @ 02357f04 */
  *(undefined1 *)(lVar10 + 0x80) = 0;
                    /* try { // try from 02357f08 to 02457f0b has its CatchHandler @ 02357f14 */
  if (lVar11 != 0) {
                    /* try { // try from 02357f0c to 02457f17 has its CatchHandler @ 02357d8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02357f08 with catch @ 02357f14
                        */
    (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
  }
  Dino_BusSand_App_Meta_YachtRacingCore__OnStartYachtRacing_22578a8(param_1,param_2,param_3,param_4)
  ;
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
  }
  if (!(bool)(bVar5 & (bVar2 ^ 1U))) {
    return (long *)0x0;
  }
  if (!bVar2) {
    if (*(int *)(lVar7 + 0x18) < 1) {
      return (long *)0x0;
    }
    plVar9 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar7,0,*(undefined8 *)PTR_DAT_04cb15c0);
    if ((bRam0000000004f9b7e0 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9b90,0);
      bRam0000000004f9b7e0 = 1;
    }
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b90 + 0x130);
      if (bVar1 <= *(byte *)(*plVar9 + 0x130)) {
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04ca9b90
           ) {
          return plVar9;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
LAB_02357fc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

