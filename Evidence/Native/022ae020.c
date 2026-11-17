/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_0$$<BindHall>b__0
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__0 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022ad7dc) */
/* WARNING: Removing unreachable block (ram,0x022ad81c) */
/* WARNING: Removing unreachable block (ram,0x022a95f8) */
/* WARNING: Removing unreachable block (ram,0x022a9620) */
/* WARNING: Removing unreachable block (ram,0x022a9634) */
/* WARNING: Removing unreachable block (ram,0x022a9640) */
/* WARNING: Removing unreachable block (ram,0x022a9644) */
/* WARNING: Removing unreachable block (ram,0x022a9658) */
/* WARNING: Removing unreachable block (ram,0x022a965c) */
/* WARNING: Removing unreachable block (ram,0x022a966c) */
/* WARNING: Removing unreachable block (ram,0x022a9684) */
/* WARNING: Removing unreachable block (ram,0x022a9694) */
/* WARNING: Removing unreachable block (ram,0x044c1424) */
/* WARNING: Removing unreachable block (ram,0x044c1438) */
/* WARNING: Removing unreachable block (ram,0x044c143c) */
/* WARNING: Removing unreachable block (ram,0x044c1444) */
/* WARNING: Removing unreachable block (ram,0x044c1450) */
/* WARNING: Removing unreachable block (ram,0x044c145c) */
/* WARNING: Removing unreachable block (ram,0x044c1470) */
/* WARNING: Removing unreachable block (ram,0x044c1484) */
/* WARNING: Removing unreachable block (ram,0x022a96bc) */
/* WARNING: Removing unreachable block (ram,0x022a96ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_0$$<BindHall>b__0
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__0
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__0_21ae020
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar2 = PTR_DAT_04caec68;
  if ((bRam0000000004f9ba78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    bRam0000000004f9ba78 = 1;
  }
  lVar18 = *(long *)(param_4 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9ba69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef08);
    FUN_02132f7c(PTR_DAT_04caef10);
    FUN_02132f7c(PTR_DAT_04caef18);
    FUN_02132f7c(PTR_DAT_04caeef8);
    bRam0000000004f9ba69 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
  puVar2 = PTR_DAT_04caec68;
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04caec68;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  fVar21 = _UNK_00e1fea0;
  lVar11 = **(long **)(lVar11 + 0xb8);
  if (lVar11 != 0) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar10 = 0;
      uVar16 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar18 == 0) goto LAB_022ad874;
        uVar19 = *(undefined8 *)(lVar11 + 0x20 + uVar10 * 8);
        lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar18,uVar19,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar16 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
        if ((uVar16 & 1) == 0) {
          if (lVar9 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId_223b204(lVar9,uVar19,0);
          }
          if ((lVar12 == 0) ||
             (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar13 == 0))
          goto LAB_022ad874;
          bVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar13,0);
          if (0 < iVar5 != (bool)(bVar4 & 1)) {
            lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
            if (lVar13 == 0) goto LAB_022ad874;
            UnityEngine_GameObject__SetActive_43c1408(lVar13,0 < iVar5,0);
          }
          if (0 < iVar5) {
            if ((bVar4 & 1) == 0) {
              UnityEngine_Transform__SetAsLastSibling_43d4684(lVar12,0);
              fVar20 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar12,0);
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              puVar2 = PTR_DAT_04caa208;
              pfVar17 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
              param_3 = param_3 - pfVar17[2];
              fVar22 = param_2 - pfVar17[1];
              param_2 = param_3 * param_3;
              if (param_2 + (fVar20 - *pfVar17) * (fVar20 - *pfVar17) + fVar22 * fVar22 < fVar21) {
                if (cRam0000000004f9b65e == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65e = '\x01';
                  pfVar17 = *(float **)(*(long *)puVar2 + 0xb8);
                }
                param_2 = pfVar17[4];
                param_3 = pfVar17[5];
                UnityEngine_Transform__set_localScale_43d1be0(pfVar17[3],lVar12,0);
              }
              if (lVar9 == 0) goto LAB_022ad874;
              lVar13 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar9,iVar5,0);
              uVar19 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caef08,0)
              ;
              bVar3 = false;
              if (lVar13 != 0) {
                bVar3 = *(int *)(lVar13 + 0x14) == 1;
              }
              if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar19,bVar3);
              uVar16 = Dino_BusSand_App_Meta_GiftPackFeature__ConsumeIconFirstShow_223b474
                                 (lVar9,iVar5,0);
              if ((uVar16 & 1) != 0) {
                lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                                   (lVar12,*(undefined8 *)PTR_DAT_04cada30);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar1);
                }
                uVar16 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
                if ((uVar16 & 1) != 0) {
                  if (lVar13 == 0) goto LAB_022ad874;
                  uVar19 = UnityEngine_Animation__get_clip_43341a8(lVar13,0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar1);
                  }
                  uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
                  if ((uVar16 & 1) != 0) {
                    lVar14 = UnityEngine_Animation__get_clip_43341a8(lVar13,0);
                    if (lVar14 == 0) goto LAB_022ad874;
                    uVar19 = UnityEngine_Object__get_name_43c71a4(lVar14,0);
                    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
                    }
                    Dino_BusSand_App_UI_CommerceUi__Play_22a8904(lVar13,uVar19,0);
                  }
                }
              }
              uVar19 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caef10,0)
              ;
            }
            else {
              uVar19 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caef10,0)
              ;
              if (lVar9 == 0) goto LAB_022ad874;
            }
            uVar15 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(lVar9,iVar5,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            uVar15 = Dino_BusSand_App_Countdown__Text_214f5d0(uVar15,0);
            Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar19,uVar15);
          }
        }
        uVar16 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    if (lVar18 != 0) {
      lVar18 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar18,*(undefined8 *)PTR_DAT_04caeef8,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      if (lVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenHallVisible_223b520(lVar9,0);
      }
      if ((lVar18 != 0) &&
         (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0), lVar11 != 0)) {
        uVar7 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar11,0);
        if ((uVar6 & 1) != (uVar7 & 1)) {
          lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
          if (lVar11 == 0) goto LAB_022ad874;
          UnityEngine_GameObject__SetActive_43c1408(lVar11,uVar6 & 1,0);
        }
        if ((uVar6 & 1) != 0) {
          fVar21 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar18,0);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar2 = PTR_DAT_04caa208;
          pfVar17 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          if ((param_3 - pfVar17[2]) * (param_3 - pfVar17[2]) +
              (fVar21 - *pfVar17) * (fVar21 - *pfVar17) +
              (param_2 - pfVar17[1]) * (param_2 - pfVar17[1]) < _UNK_00e1fea0) {
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
              pfVar17 = *(float **)(*(long *)puVar2 + 0xb8);
            }
            UnityEngine_Transform__set_localScale_43d1be0(pfVar17[3],pfVar17[4],pfVar17[5],lVar18,0)
            ;
          }
          uVar19 = UnityEngine_Transform__Find_43d4bec(lVar18,*(undefined8 *)PTR_DAT_04caef10,0);
          if (lVar9 == 0) goto LAB_022ad874;
          uVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar9,0);
          uVar15 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(lVar9,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
          }
          uVar15 = Dino_BusSand_App_Countdown__Text_214f5d0(uVar15,0);
          Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar19,uVar15);
        }
        return;
      }
    }
  }
LAB_022ad874:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

