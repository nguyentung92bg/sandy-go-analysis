/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_2
void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_2 (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_2
   void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_2
   (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_2_236cc94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  lVar6 = Dino_BusSand_Cheat_CheatMobilePanel__get_C_2368914(0);
  puVar2 = PTR_DAT_04cabaf8;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_28 = 10000;
  if ((bRam0000000004f9c755 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8,10000,0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cae4e8);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cad048);
    FUN_02132f7c(PTR_DAT_04cba900);
    bRam0000000004f9c755 = 1;
  }
  puVar3 = PTR_DAT_04cad048;
  puVar1 = PTR_DAT_04caa038;
  auStack_38[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__Add_2272578(0x3e9,10000,*(undefined8 *)puVar3,0);
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,5);
  puVar2 = PTR_DAT_04cae4e8;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20));
      uVar5 = System_Int64__ToString_482ec3c(&uStack_28,*(undefined8 *)puVar2,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x28),uVar5);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_04cba900;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30));
          auStack_38[0] = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
          uVar5 = System_Int64__ToString_482ec3c(auStack_38,*(undefined8 *)puVar2,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = uVar5;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x38),uVar5);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_04cab2b8;
              thunk_FUN_02134474();
              uVar5 = System_String__Concat_46d31f0(lVar4,0);
              Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(lVar6,uVar5);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

