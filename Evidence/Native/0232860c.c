/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$OnItemChanged
void Dino_BusSand_App_Meta_BattleYachtSpend__OnItemChanged (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$OnItemChanged
   void Dino_BusSand_App_Meta_BattleYachtSpend__OnItemChanged (int32_t id, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_BattleYachtSpend__OnItemChanged_222860c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9be0b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d10);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    FUN_02132f7c(PTR_DAT_04cb2da0);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be0b = 1;
  }
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_04cb2c68;
  puVar2 = PTR_DAT_04cb1d10;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) != 0) {
    lVar6 = *(long *)PTR_DAT_04cb2c68;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    iVar4 = System_Array__IndexOf_int__2906224
                      (*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),param_1,*(undefined8 *)puVar2
                      );
    if (-1 < iVar4) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1,0);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      if (lVar8 != 0) {
        uVar7 = System_Collections_Generic_Dictionary_int__long___TryGetValue_34356a4
                          (lVar8,param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cb2da0);
        lVar8 = lStack_38;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        if (lVar9 != 0) {
          System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                    (lVar9,param_1,lVar6,*(undefined8 *)PTR_DAT_04cb2d98);
          puVar1 = PTR_DAT_04caba50;
          lVar6 = lVar6 - lVar8;
          if ((uVar7 & 1) == 0) {
            lVar6 = 0;
          }
          if (-1 < lVar6) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_04ca9ae8;
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
          puVar2 = PTR_DAT_04cac440;
          if ((uVar7 & 1) != 0) {
            return;
          }
          if (lVar8 != 0) {
            if (*(char *)(lVar8 + 0x38) == '\0') {
              return;
            }
            if (param_1 != 0x3e9) {
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar3;
              }
              lVar8 = **(long **)(lVar8 + 0xb8);
              if (lVar8 == 0) {
                return;
              }
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),param_1,-lVar6,*(undefined8 *)(lVar8 + 0x28))
              ;
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar4 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
            if (lVar6 != -iVar4) {
              return;
            }
            uVar10 = *(undefined8 *)(lVar8 + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
            if ((uVar7 & 1) == 0) {
              return;
            }
            if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)(*(long *)(lVar8 + 0x20) + 0x20) != 3) {
              return;
            }
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar3;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar6 == 0) {
              return;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

