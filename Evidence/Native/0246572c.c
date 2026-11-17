/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$AddItem
void Dino_BusSand_Cheat_CheatManager__AddItem (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t id, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$AddItem
   void Dino_BusSand_Cheat_CheatManager__AddItem (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t
   id, int32_t n, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__AddItem_236572c
               (undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  int iStack_34;
  
  puVar1 = PTR_DAT_04cabaf8;
  iStack_34 = param_3;
  if ((bRam0000000004f9c756 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cad048);
    FUN_02132f7c(PTR_DAT_04cabf00);
    bRam0000000004f9c756 = 1;
  }
  puVar3 = PTR_DAT_04cba458;
  puVar2 = PTR_DAT_04cad048;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caa038;
  Dino_BusSand_App_Meta_Profile__Add_2272578(param_2,(long)param_3,*(undefined8 *)puVar2,0);
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__RefreshHud_235d608();
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,7);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20));
      uVar5 = System_Int32__ToString_482d750(&iStack_34,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x28),uVar5);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30));
          uVar5 = Dino_BusSand_Cheat_CheatManager__ItemName_236599c(param_2);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = uVar5;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x38),uVar5);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_04cabf00;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x40));
              uStack_48 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
                    /* try { // try from 02465914 to 02565a83 has its CatchHandler @ 02465914
                       catch() { ... } // from try @ 02465914 with catch @ 02465914
                       catch() { ... } // from try @ 02465b60 with catch @ 02465914
                       catch() { ... } // from try @ 02465c00 with catch @ 02465914
                       catch() { ... } // from try @ 02465c60 with catch @ 02465914 */
              uVar5 = System_Int64__ToString_482e7e4(&uStack_48,0);
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) = uVar5;
                thunk_FUN_02134474((undefined8 *)(lVar4 + 0x48),uVar5);
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_04cab2b8;
                  thunk_FUN_02134474();
                  uVar5 = System_String__Concat_46d31f0(lVar4,0);
                  Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar5);
                  return;
                }
              }
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

