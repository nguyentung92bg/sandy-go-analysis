/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<Play>b__25_1
void Dino_BusSand_App_UI_HomePanel___Play_b__25_1 (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<Play>b__25_1
   void Dino_BusSand_App_UI_HomePanel___Play_b__25_1 (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel___Play_b__25_1_22ede40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c454 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c454 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    Dino_BusSand_App_GameApp__OnHallPlay_2169cd0(**(long **)(lVar5 + 0xb8),0);
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if (**(long **)(lVar5 + 0xb8) != 0) {
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x39) != '\0') {
        uVar8 = *(undefined8 *)(param_1 + 0x50);
        *(undefined1 *)(param_1 + 0x60) = 0;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0x50);
          if (lVar5 != 0) {
            if ((bRam0000000004f9c3e5 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cb6eb0,0);
              FUN_02132f7c(PTR_DAT_04cb6eb8);
              FUN_02132f7c(PTR_DAT_04cb6ec0);
              FUN_02132f7c(PTR_DAT_04cb6ec8);
              FUN_02132f7c(PTR_DAT_04cb6ed0);
              bRam0000000004f9c3e5 = 1;
            }
            uStack_60 = 0;
            puStack_58 = (undefined8 *)0x0;
            lStack_50 = 0;
            UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(lVar5,0);
            *(undefined8 *)(lVar5 + 0xd8) = 0;
            *(undefined1 *)(lVar5 + 0xd4) = 0;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0xd8),0);
            if ((*(long *)(lVar5 + 0x78) != 0) &&
               (lVar4 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                                  (*(long *)(lVar5 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
               puVar3 = PTR_DAT_04cb6ec0, puVar1 = PTR_DAT_04cb6eb8, lVar4 != 0)) {
              System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                        (&uStack_78,lVar4,*(undefined8 *)PTR_DAT_04cb6ed0);
              puVar2 = PTR_DAT_04caa208;
              puStack_58 = puStack_70;
              uStack_60 = uStack_78;
              lStack_50 = lStack_68;
              uStack_78 = 0;
              puStack_70 = &uStack_60;
              while (uVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                                       (&uStack_60,*(undefined8 *)puVar3), lVar4 = lStack_50,
                    (uVar6 & 1) != 0) {
                if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(long *)(lStack_50 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lStack_50 + 0x68),0)
                ;
                lVar4 = *(long *)(lVar4 + 0x18);
                if (cRam0000000004f9b65e == '\0') {
                  FUN_02132f7c(puVar2);
                  cRam0000000004f9b65e = '\x01';
                }
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                           *(undefined4 *)(lVar7 + 0x14),lVar4,0);
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                        (&uStack_60,*(undefined8 *)puVar1);
              if (*(long *)(lVar5 + 0xe0) != 0) {
                UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lVar5 + 0xe0),0);
                if (*(long *)(lVar5 + 0x100) != 0) {
                  Dino_BusSand_App_UI_HomeStage__ComeBack_22ef9b8(*(long *)(lVar5 + 0x100),0);
                }
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_023edf74;
        }
      }
      return;
    }
  }
LAB_023edf74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

