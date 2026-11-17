/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EvaluateSingle
bool Dino_BusSand_App_Meta_GiftPackFeature__EvaluateSingle (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t type, System_String_o* raw, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EvaluateSingle
   bool Dino_BusSand_App_Meta_GiftPackFeature__EvaluateSingle
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t type, System_String_o* raw, int32_t
   level, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__EvaluateSingle_223916c
               (undefined8 param_1,int param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  double dStack_78;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04cb3390;
                    /* try { // try from 02339190 to 02439193 has its CatchHandler @ 0233925c */
                    /* try { // try from 02339194 to 02439197 has its CatchHandler @ 02339258 */
                    /* try { // try from 02339198 to 0243919b has its CatchHandler @ 02339240 */
                    /* try { // try from 0233919c to 0243919f has its CatchHandler @ 02339238 */
                    /* try { // try from 023391a0 to 024391a3 has its CatchHandler @ 023391a4 */
                    /* catch() { ... } // from try @ 023391a0 with catch @ 023391a4
                       try { // try from 023391a4 to 024391bf has its CatchHandler @ 02338d04 */
  if ((bRam0000000004f9beb8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0233912c with catch @ 023391a8 */
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cb3590);
                    /* try { // try from 023391c0 to 024391d7 has its CatchHandler @ 02339228 */
    FUN_02132f7c(PTR_DAT_04cb3598);
    FUN_02132f7c(PTR_DAT_04cb35a0);
                    /* try { // try from 023391d8 to 02439213 has its CatchHandler @ 02338d04 */
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb35a8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02339214 to 02439223 has its CatchHandler @ 02339228 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9beb8 = 1;
  }
                    /* catch() { ... } // from try @ 023391c0 with catch @ 02339228
                       catch() { ... } // from try @ 02339214 with catch @ 02339228 */
                    /* try { // try from 0233922c to 0243922f has its CatchHandler @ 02339318 */
                    /* try { // try from 02339230 to 02439277 has its CatchHandler @ 02338d04 */
  uStack_50 = 0;
  uStack_48 = 0;
                    /* catch() { ... } // from try @ 023390f0 with catch @ 02339234 */
  uStack_60 = 0;
  dStack_58 = 0.0;
                    /* catch() { ... } // from try @ 0233919c with catch @ 02339238 */
  uStack_68 = 0;
                    /* catch() { ... } // from try @ 02339028 with catch @ 0233923c */
  iStack_6c = 0;
                    /* catch() { ... } // from try @ 02339198 with catch @ 02339240 */
  lStack_80 = 0;
  dStack_78 = 0.0;
                    /* catch() { ... } // from try @ 02339048 with catch @ 02339244 */
  uStack_90 = 0;
  uStack_88 = 0;
                    /* catch() { ... } // from try @ 0233909c with catch @ 02339248 */
  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
                    /* catch() { ... } // from try @ 023390a0 with catch @ 0233924c */
                    /* catch() { ... } // from try @ 023390b0 with catch @ 02339250 */
  if (param_3 == 0) {
    lVar9 = *(long *)PTR_DAT_04ca9c30;
  }
  else {
                    /* catch() { ... } // from try @ 023390c4 with catch @ 02339254 */
                    /* catch() { ... } // from try @ 02339194 with catch @ 02339258 */
                    /* catch() { ... } // from try @ 02339190 with catch @ 0233925c */
    lVar9 = System_String__Trim_46d6ee0(param_3,0);
  }
                    /* try { // try from 02339278 to 0243927b has its CatchHandler @ 02339284 */
  uVar10 = 0;
  if (param_2 < 6) {
                    /* catch() { ... } // from try @ 02339278 with catch @ 02339284 */
    if (param_2 < 3) {
      if (param_2 == 1) {
        uVar10 = System_Int32__TryParse_482de64(lVar9,(long)&uStack_48 + 4,0);
        if ((uVar10 & 1) == 0) {
          return false;
        }
        bVar3 = SBORROW4(uStack_48._4_4_,param_4);
        bVar4 = uStack_48._4_4_ - param_4 < 0;
        bVar5 = uStack_48._4_4_ == param_4;
LAB_023393ac:
        return bVar5 || bVar4 != bVar3;
      }
      if (param_2 != 2) {
        return false;
      }
      goto LAB_0233936c;
    }
                    /* try { // try from 02339288 to 0243928f has its CatchHandler @ 02339318 */
    if (param_2 != 3) {
                    /* try { // try from 02339290 to 024392ab has its CatchHandler @ 02338d04 */
                    /* catch() { ... } // from try @ 02338e90 with catch @ 02339294 */
      if (param_2 != 4) {
        if (param_2 != 5) {
          return false;
        }
                    /* try { // try from 023392ac to 024392c3 has its CatchHandler @ 02339308 */
        uVar10 = System_Int32__TryParse_482de64(lVar9,&uStack_50,0);
        if ((uVar10 & 1) == 0) {
          return false;
        }
                    /* try { // try from 023392c4 to 024392f7 has its CatchHandler @ 02338d04 */
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
        lVar9 = (long)(int)uStack_50;
        bVar3 = SBORROW8(lVar8,lVar9);
        bVar4 = lVar8 - lVar9 < 0;
        bVar5 = lVar8 == lVar9;
        goto LAB_023393ac;
      }
      if (lVar9 == 0) goto LAB_02339838;
      lVar9 = System_String__Split_46d50c0(lVar9,0x2c,0,0);
      uVar10 = 0;
      if (lVar9 == 0) goto LAB_02339838;
      if (*(int *)(lVar9 + 0x18) != 3) {
        return false;
      }
      uVar10 = 0;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_02339838;
      uVar11 = System_String__Trim_46d6ee0(*(long *)(lVar9 + 0x20),0);
      uVar10 = System_Int32__TryParse_482de64(uVar11,(long)&uStack_60 + 4,0);
      if ((uVar10 & 1) == 0) {
        return false;
      }
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
LAB_0233983c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar10 = 0;
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02339838;
      uVar11 = System_String__Trim_46d6ee0(*(long *)(lVar9 + 0x28),0);
      uVar10 = System_Int32__TryParse_482de64(uVar11,&uStack_60,0);
      if ((uVar10 & 1) == 0) {
        return false;
      }
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0233983c;
      uVar10 = 0;
      if (*(long *)(lVar9 + 0x30) == 0) goto LAB_02339838;
      uVar11 = System_String__Trim_46d6ee0(*(long *)(lVar9 + 0x30),0);
      uVar10 = System_Int32__TryParse_482de64(uVar11,(long)&uStack_68 + 4,0);
      if ((uVar10 & 1) == 0) {
        return false;
      }
      if (uStack_60._4_4_ < 1) {
        return false;
      }
      if ((int)uStack_60 < 1) {
        return false;
      }
      if (uStack_68._4_4_ < 1) {
        return false;
      }
      uVar10 = 0;
      if (lVar8 == 0) goto LAB_02339838;
      uVar11 = *(undefined8 *)(lVar8 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      dVar14 = (double)Dino_BusSand_App_Meta_GiftPackFeature__SumSince_22398a0
                                 (uVar11,0x3e9,lVar8 / 1000 + (long)(int)uStack_60 * -0xe10);
LAB_023396e0:
      bVar4 = NAN(dVar14) || NAN((double)uStack_68._4_4_);
      bVar5 = dVar14 < (double)uStack_68._4_4_;
      goto LAB_02339504;
    }
    uVar10 = System_Int32__TryParse_482de64(lVar9,(long)&uStack_50 + 4,0);
    if ((uVar10 & 1) == 0) {
      return false;
    }
    if (lVar8 == 0) goto LAB_02339838;
    iVar6 = *(int *)(lVar8 + 0x24);
  }
  else {
    if (7 < param_2) {
      if (param_2 == 8) {
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar10 = System_Double__TryParse_481811c(lVar9,0xa7,uVar11,&dStack_58,0);
        puVar1 = PTR_DAT_04cabaf8;
        if ((uVar10 & 1) == 0) {
          return false;
        }
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        uVar10 = *(ulong *)puVar1;
        if (*(int *)(uVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar10 = *(ulong *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(uVar10 + 0xb8) + 0x10);
        if (lVar8 != 0) {
          return *(double *)(lVar8 + 0x140) <= dStack_58;
        }
      }
      else {
                    /* try { // try from 023392f8 to 02439307 has its CatchHandler @ 02339308 */
        if (param_2 != 9) {
          if (param_2 != 10) {
            return false;
          }
                    /* catch() { ... } // from try @ 023392ac with catch @ 02339308
                       catch() { ... } // from try @ 023392f8 with catch @ 02339308 */
                    /* try { // try from 0233930c to 0243930f has its CatchHandler @ 02339318 */
                    /* try { // try from 02339310 to 0243931b has its CatchHandler @ 02338d04 */
          if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0233922c with catch @ 02339318
                       catch() { ... } // from try @ 02339288 with catch @ 02339318
                       catch() { ... } // from try @ 0233930c with catch @ 02339318 */
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
          if (lVar8 != 0) {
            if ((bRam0000000004f9bf4e & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cad860,0);
              FUN_02132f7c(PTR_DAT_04cb01b0);
              bRam0000000004f9bf4e = 1;
            }
            iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeId_2244c08(lVar8);
            puVar1 = PTR_DAT_04cb01b0;
            if (0 < iVar6) {
              lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                (lVar8,*(undefined8 *)PTR_DAT_04cb01b0);
              if (lVar9 != 0) {
                if (*(long *)(lVar9 + 0x80) == 0) {
                  return false;
                }
                lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                  (lVar8,*(undefined8 *)puVar1);
                if (lVar9 != 0) {
                  lVar9 = *(long *)(lVar9 + 0x80);
                  uVar7 = Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeId_2244c08(lVar8);
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      iVar6 = System_Array__IndexOf_int__297cf74
                                        (*(undefined8 *)(lVar9 + 0x10),uVar7,0,
                                         *(int *)(lVar9 + 0x18),
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20)
                                                  + 0xc0) + 0x150));
                      return iVar6 != -1;
                    }
                    return false;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            return false;
          }
          return false;
        }
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar10 = System_Double__TryParse_481811c(lVar9,0xa7,uVar11,&dStack_78,0);
        puVar1 = PTR_DAT_04caec48;
        if ((uVar10 & 1) == 0) {
          return false;
        }
        if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        uVar12 = Dino_BusSand_App_Meta_GiftPackCycle__WeekStartUnix_2233528(lVar9 / 1000);
        uVar10 = uVar12;
        if (lVar8 != 0) {
          uVar10 = 0;
          if (*(long *)(lVar8 + 0x68) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_90,*(long *)(lVar8 + 0x68),*(undefined8 *)PTR_DAT_04cb35a8);
            puVar2 = PTR_DAT_04cb3598;
            dVar14 = 0.0;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_90,*(undefined8 *)puVar2), lVar8 = lStack_80,
                  (uVar10 & 1) != 0) {
              if ((lStack_80 != 0) && (lVar9 = *(long *)(lStack_80 + 0x10), (long)uVar12 <= lVar9))
              {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar13 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                if (lVar9 <= lVar13 / 1000) {
                  dVar14 = dVar14 + *(double *)(lVar8 + 0x20);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_90,*(undefined8 *)PTR_DAT_04cb3590);
            return dStack_78 < dVar14;
          }
        }
      }
      goto LAB_02339838;
    }
    if (param_2 == 6) {
      if (lVar9 == 0) goto LAB_02339838;
      lVar9 = System_String__Split_46d50c0(lVar9,0x2c,0,0);
      uVar10 = 0;
      if (lVar9 == 0) goto LAB_02339838;
      if (*(int *)(lVar9 + 0x18) != 2) {
        return false;
      }
      uVar10 = 0;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_02339838;
      uVar11 = System_String__Trim_46d6ee0(*(long *)(lVar9 + 0x20),0);
      uVar10 = System_Int32__TryParse_482de64(uVar11,&uStack_68,0);
      if ((uVar10 & 1) == 0) {
        return false;
      }
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_0233983c;
      uVar10 = 0;
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02339838;
      uVar11 = System_String__Trim_46d6ee0(*(long *)(lVar9 + 0x28),0);
      uVar12 = System_Int32__TryParse_482de64(uVar11,&iStack_6c,0);
      uVar10 = 0;
      if ((uVar12 & 1) == 0) {
        return false;
      }
      if ((int)uStack_68 < 1) {
        return false;
      }
      if (iStack_6c < 1) {
        return false;
      }
      if (lVar8 == 0) goto LAB_02339838;
      lVar9 = *(long *)(lVar8 + 0x48);
      iVar6 = (int)uStack_68;
      if ((lVar9 < 1) && (lVar9 = *(long *)(lVar8 + 0x38), lVar9 < 1)) {
        if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        lVar9 = lVar9 / 1000 + -0x15180;
        iVar6 = (int)uStack_68;
      }
      uVar11 = *(undefined8 *)(lVar8 + 0x60);
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar14 = (double)Dino_BusSand_App_Meta_GiftPackFeature__SumSince_22398a0(uVar11,iVar6,lVar9);
      uStack_68._4_4_ = iStack_6c;
      goto LAB_023396e0;
    }
    if (param_2 != 7) {
      return false;
    }
LAB_0233936c:
    uVar10 = System_Int32__TryParse_482de64(lVar9,&uStack_48,0);
    if ((uVar10 & 1) == 0) {
      return false;
    }
    if (lVar8 == 0) {
LAB_02339838:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar10);
    }
    iVar6 = *(int *)(lVar8 + 0x20);
    uStack_50._4_4_ = (int)uStack_48;
  }
  bVar4 = SBORROW4(iVar6,uStack_50._4_4_);
  bVar5 = iVar6 - uStack_50._4_4_ < 0;
LAB_02339504:
  return bVar5 == bVar4;
}

