/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$HideOutside
void Dino_BusSand_Cheat_CheatUiHider__HideOutside (Dino_BusSand_Cheat_CheatUiHider_o* __this, UnityEngine_Transform_o* root, Dino_BusSand_App_UI_HudPanel_o* hud, System_String_array* keep, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$HideOutside
   void Dino_BusSand_Cheat_CheatUiHider__HideOutside (Dino_BusSand_Cheat_CheatUiHider_o* __this,
   UnityEngine_Transform_o* root, Dino_BusSand_App_UI_HudPanel_o* hud, System_String_array* keep,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__HideOutside_236ef68
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c7bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe70);
    FUN_02132f7c(PTR_DAT_04cbaf60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7bb = 1;
  }
  puVar2 = PTR_DAT_04cbaf60;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_HashSet_object___Clear_37e59fc
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cbaf60);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_HashSet_object___Clear_37e59fc
                (*(long *)(param_1 + 0x30),*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_3,0,0);
      puVar2 = PTR_DAT_04cabe70;
      if ((uVar5 & 1) != 0) {
        if (param_4 == 0) goto LAB_0246f164;
        if (0 < (int)*(ulong *)(param_4 + 0x18)) {
          uVar5 = 0;
          uVar7 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (param_3 == 0) goto LAB_0246f164;
            uVar8 = *(undefined8 *)(param_4 + uVar5 * 8 + 0x20);
            lVar6 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
            if (lVar6 == 0) goto LAB_0246f164;
            lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,uVar8,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((uVar7 & 1) == 0) {
              if (lVar6 == 0) goto LAB_0246f164;
              uVar7 = UnityEngine_Transform__IsChildOf_43d4dc4(lVar6,param_2,0);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(param_1 + 0x30) == 0) goto LAB_0246f164;
                System_Collections_Generic_HashSet_object___Add_37e654c
                          (*(long *)(param_1 + 0x30),lVar6,*(undefined8 *)puVar2);
                while( true ) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
                  if ((uVar7 & 1) == 0) break;
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,param_2,0);
                  if ((uVar7 & 1) == 0) break;
                  if ((*(long *)(param_1 + 0x28) == 0) ||
                     (System_Collections_Generic_HashSet_object___Add_37e654c
                                (*(long *)(param_1 + 0x28),lVar6,*(undefined8 *)puVar2), lVar6 == 0)
                     ) goto LAB_0246f164;
                  lVar6 = UnityEngine_Transform__get_parent_43d0d70(lVar6,0);
                }
              }
            }
            uVar7 = (ulong)*(uint *)(param_4 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(param_4 + 0x18));
        }
      }
      if ((bRam0000000004f9c7bc & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cbaf80);
        bRam0000000004f9c7bc = 1;
      }
      if (param_2 != 0) {
        iVar3 = UnityEngine_Transform__get_childCount_43d4480(param_2,0);
        puVar2 = PTR_DAT_04cbaf80;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar8 = UnityEngine_Transform__GetChild_43d5294(param_2,iVar3,0);
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_0246f490;
            uVar5 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                              (*(long *)(param_1 + 0x30),uVar8,*(undefined8 *)puVar2);
            if ((uVar5 & 1) == 0) {
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_0246f490;
              uVar5 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                                (*(long *)(param_1 + 0x28),uVar8,*(undefined8 *)puVar2);
              if ((uVar5 & 1) == 0) {
                Dino_BusSand_Cheat_CheatUiHider__Hide_236f16c(param_1,uVar8);
              }
              else {
                Dino_BusSand_Cheat_CheatUiHider__Walk_236f3ac(param_1,uVar8);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = UnityEngine_Transform__get_childCount_43d4480(param_2,0);
          } while (iVar3 < iVar4);
        }
        return;
      }
LAB_0246f490:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0246f164:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

