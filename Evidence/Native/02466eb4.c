/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$AddCurrency
void Dino_BusSand_Cheat_CheatManager__AddCurrency (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$AddCurrency
   void Dino_BusSand_Cheat_CheatManager__AddCurrency (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__AddCurrency_2366eb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c75f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cae4e8);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cad048);
    FUN_02132f7c(PTR_DAT_04cba900);
    bRam0000000004f9c75f = 1;
  }
  puVar2 = PTR_DAT_04cad048;
  puVar1 = PTR_DAT_04caa038;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Add_2272578(0x3e9,uVar4,*(undefined8 *)puVar2,0);
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    lVar3 = FUN_02133068(*(undefined8 *)puVar1,5);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04cae4e8;
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_024670ac;
        uVar4 = System_Int64__ToString_482ec3c
                          (*(long *)(param_1 + 0x100) + 0x18,*(undefined8 *)PTR_DAT_04cae4e8,0);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cba900;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
            uStack_28 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
            uVar4 = System_Int64__ToString_482ec3c(&uStack_28,*(undefined8 *)puVar1,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar4);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cab2b8;
                thunk_FUN_02134474();
                uVar4 = System_String__Concat_46d31f0(lVar3,0);
                Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar4);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024670ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

